#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

Mat image, processed;

void loadImage() {
    string path;
    cout << "Enter image path: ";
    cin >> path;
    image = imread(path);
    if(image.empty()) {
        cout << "Error loading image!" << endl;
        return;
    }
    processed = image.clone();
    cout << "Image loaded successfully!" << endl;
}

void displayImage() {
    if(processed.empty()) {
        cout << "No image loaded!" << endl;
        return;
    }
    imshow("Image", processed);
    waitKey(0);
    destroyAllWindows();
}

void applyGrayscale() {
    if(processed.empty()) return;
    cvtColor(processed, processed, COLOR_BGR2GRAY);
    cvtColor(processed, processed, COLOR_GRAY2BGR);
    cout << "Grayscale applied!" << endl;
}

void applyBlur() {
    if(processed.empty()) return;
    blur(processed, processed, Size(15, 15));
    cout << "Blur applied!" << endl;
}

void applySharpen() {
    if(processed.empty()) return;
    Mat kernel = (Mat_<float>(3,3) << 0, -1, 0, -1, 5, -1, 0, -1, 0);
    filter2D(processed, processed, -1, kernel);
    cout << "Sharpen applied!" << endl;
}

void adjustBrightness() {
    if(processed.empty()) return;
    int value;
    cout << "Enter brightness value (-100 to 100): ";
    cin >> value;
    processed.convertTo(processed, -1, 1, value);
    cout << "Brightness adjusted!" << endl;
}

void adjustContrast() {
    if(processed.empty()) return;
    float value;
    cout << "Enter contrast value (0.5 to 3.0): ";
    cin >> value;
    processed.convertTo(processed, -1, value, 0);
    cout << "Contrast adjusted!" << endl;
}

void cropImage() {
    if(processed.empty()) return;
    int x, y, w, h;
    cout << "Enter crop coordinates (x y width height): ";
    cin >> x >> y >> w >> h;
    if(x >= 0 && y >= 0 && x + w <= processed.cols && y + h <= processed.rows) {
        processed = processed(Rect(x, y, w, h));
        cout << "Image cropped!" << endl;
    } else {
        cout << "Invalid crop dimensions!" << endl;
    }
}

void resizeImage() {
    if(processed.empty()) return;
    int w, h;
    cout << "Enter new dimensions (width height): ";
    cin >> w >> h;
    resize(processed, processed, Size(w, h));
    cout << "Image resized!" << endl;
}

void saveImage() {
    if(processed.empty()) return;
    string path;
    cout << "Enter save path: ";
    cin >> path;
    imwrite(path, processed);
    cout << "Image saved!" << endl;
}

void resetImage() {
    if(image.empty()) return;
    processed = image.clone();
    cout << "Image reset to original!" << endl;
}

int main() {
    int choice;
    
    while(true) {
        cout << "\n--- IMAGE PROCESSOR ---" << endl;
        cout << "1. Load Image" << endl;
        cout << "2. Display Image" << endl;
        cout << "3. Apply Grayscale" << endl;
        cout << "4. Apply Blur" << endl;
        cout << "5. Apply Sharpen" << endl;
        cout << "6. Adjust Brightness" << endl;
        cout << "7. Adjust Contrast" << endl;
        cout << "8. Crop Image" << endl;
        cout << "9. Resize Image" << endl;
        cout << "10. Save Image" << endl;
        cout << "11. Reset to Original" << endl;
        cout << "12. Exit" << endl;
        cout << "Choose option: ";
        cin >> choice;
        
        switch(choice) {
            case 1: loadImage(); break;
            case 2: displayImage(); break;
            case 3: applyGrayscale(); break;
            case 4: applyBlur(); break;
            case 5: applySharpen(); break;
            case 6: adjustBrightness(); break;
            case 7: adjustContrast(); break;
            case 8: cropImage(); break;
            case 9: resizeImage(); break;
            case 10: saveImage(); break;
            case 11: resetImage(); break;
            case 12: return 0;
            default: cout << "Invalid option!" << endl;
        }
    }
}