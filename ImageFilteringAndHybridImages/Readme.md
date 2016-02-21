<h1>Project 1: Image Filtering and Hybrid Images</h1>
<h2>
	Name: Methew Guda<br>
	ID: A00381751<br>
	Submitted  to: Dr. Norma Linney<br>
	Due Date: February 09, 2016<br>
</h2>

<h3>
	Objective: The goal of this assignment is to write an image filtering function<br>
	and use it to create hybrid images using a simplified version of the IGGRAPH 2006<br>
	paper by Oliva, Torralba, and Schyns. 
</h3>

<h3>Sample Images:</h3>
<img src="InputImages/bicycle.bmp" alt="Bicycle" style="width:20%;height:20%;">
<img src="InputImages/motorcycle.bmp" alt="Motorcycle" style="width:20%;height:20%;">
<img src="InputImages/bird.bmp" alt="Bird" style="width:20%;height:20%;">
<img src="InputImages/plane.bmp" alt="Plane" style="width:20%;height:20%;">  	
<img src="InputImages/cat.bmp" alt="Cat" style="width:20%;height:20%;">
<img src="InputImages/dog.bmp" alt="Dog" style="width:20%;height:20%;">
<img src="InputImages/fish.bmp" alt="Fish" style="width:20%;height:20%;">
<img src="InputImages/submarine.bmp" alt="Submarine" style="width:20%;height:20%;">
<img src="InputImages/einstein.bmp" alt="Einstein" style="width:20%;height:20%;">  	  	
<img src="InputImages/marilyn.bmp" alt="Marilyn" style="width:20%;height:20%;">

<h3>Output Images</h3>
<img src="OutputImages/bicycle.bmp" alt="Bicycle" style="width:20%;height:20%;">
<img src="OutputImages/motorcycle.bmp" alt="Motorcycle" style="width:20%;height:20%;">
<img src="OutputImages/bicycle&motorcycle.bmp" alt="Hybrid 01" style="width:20%;height:20%;">
<img src="OutputImages/bird.bmp" alt="Bird" style="width:20%;height:20%;">
<img src="OutputImages/plane.bmp" alt="Plane" style="width:20%;height:20%;">
<img src="OutputImages/bird&plane.bmp" alt="Hybrid 02" style="width:20%;height:20%;">   	
<img src="OutputImages/cat.bmp" alt="Cat" style="width:20%;height:20%;">
<img src="OutputImages/dog.bmp" alt="Dog" style="width:20%;height:20%;">
<img src="OutputImages/cat&dog.bmp" alt="Hybrid 03" style="width:20%;height:20%;">
<img src="OutputImages/fish.bmp" alt="Fish" style="width:20%;height:20%;">
<img src="OutputImages/submarine.bmp" alt="Submarine" style="width:20%;height:20%;">
<img src="OutputImages/fish&submarine.bmp" alt="Hybrid 04" style="width:20%;height:20%;">
<img src="OutputImages/einstein.bmp" alt="Einstein" style="width:20%;height:20%;">  	  	
<img src="OutputImages/marilyn.bmp" alt="Marilyn" style="width:20%;height:20%;">
<img src="OutputImages/einstein&marilyn.bmp" alt="Hybrid 05" style="width:20%;height:20%;"> 

<h3>Process:</h3>
<p>
	Low Pass Filtering: I used GaussianBlur() Function from OpenCV 3.1.0<br>
	High Pass Filtering: I used Laplacian() Function from OpenCV 3.1.0<br>
	Combining two images: I used addWeighted() Function from OpenCV 3.1.0
</p>

<h3>References: </h3>
<p>
	GaussianBlur - http://docs.opencv.org/3.1.0/d4/d86/group__imgproc__filter.html#gaabe8c836e97159a9193fb0b11ac52cf1<br>
	Tutorial - http://docs.opencv.org/2.4/doc/tutorials/imgproc/gausian_median_blur_bilateral_filter/gausian_median_blur_bilateral_filter.html<br>
	Laplacian - http://docs.opencv.org/3.1.0/d4/d86/group__imgproc__filter.html#gad78703e4c8fe703d479c1860d76429e6&amp;gsc.tab=0<br>
	addWeighted - http://docs.opencv.org/2.4/doc/tutorials/core/adding_images/adding_images.html<br>
</p>