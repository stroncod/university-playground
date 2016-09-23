# Tarea2.SisInt
Códigos utilizados en la Tarea 2 de Sistemas Inteligentes

Thanks to the gods in Cornell for [SVM Multiclass](https://www.cs.cornell.edu/people/tj/svm_light/svm_multiclass.html)

Little explanation to each code:

* **CleanCSV**: Read data in CSV and assign the respective number for each label. `<id_label>.<question+body>`
* **BagOfWords**: Create the bag of words (duh..) from CSV, also assign an id for each word. `<id_word> <word>` 
* **VectorExMachina**: Create the vectors for SVM, use both files from CleanCSV and BagOfWords. _Thanks to Rodrigo Melendez_
* **Split.sh**: Generate necessary splits for Cross-Validation. _Thanks to super ayudante Alexander_
* **CrossJoint**: Make Cross Validation automatically using SVM Multiclass, generate 10 predictions files. 
* **MergeFiles**: Merge predictions files into one for use in other codes. _Thanks to_ @joctomas 
* **ConfusedWhiteRabbit**: Create Matrix of Confusion based on predictions.
* **MRRTEST**: Calculate MRR. _Thanks to Rodrigo Melendez_
* **BinaryLiesDetector**: Compare data with predictions, 1 is bad and 0 is good (hint: compare with CSV after). _Thanks to Rodrigo Melendez_
* **WhatAWhord**: Correlation with number of words in each question (average, total, etc).
  * **ThisMayBeNecessary**: Use it before WhatAWord! Create the data format needed for correct use

