# Image Processor

## Description
A comprehensive image processing application using OpenCV library for various image manipulation operations.

## How it Works
- Uses OpenCV library for image operations
- Menu-driven interface for different processing options
- Maintains original image for reset functionality
- Supports various image formats (jpg, png, bmp, etc.)

## Features
- Load and display images
- Apply grayscale filter
- Apply blur and sharpen effects
- Adjust brightness and contrast
- Crop and resize images
- Save processed images
- Reset to original image

## Dependencies
- OpenCV library (cv2)

## Compilation
```bash
g++ imageprocessor.cpp -o imageprocessor `pkg-config --cflags --libs opencv4`
```

## Example Output
```
--- IMAGE PROCESSOR ---
1. Load Image
2. Display Image
3. Apply Grayscale
4. Apply Blur
5. Apply Sharpen
6. Adjust Brightness
7. Adjust Contrast
8. Crop Image
9. Resize Image
10. Save Image
11. Reset to Original
12. Exit
Choose option: 1
Enter image path: photo.jpg
Image loaded successfully!

--- IMAGE PROCESSOR ---
Choose option: 3
Grayscale applied!

--- IMAGE PROCESSOR ---
Choose option: 6
Enter brightness value (-100 to 100): 20
Brightness adjusted!

--- IMAGE PROCESSOR ---
Choose option: 10
Enter save path: processed_photo.jpg
Image saved!
```

## Installation Notes
- Requires OpenCV development libraries
- On Ubuntu: `sudo apt-get install libopencv-dev`
- On Windows: Download OpenCV and configure paths