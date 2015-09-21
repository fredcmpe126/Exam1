//Your Includes

using namespace std;

//Keep in mind, this is just an example. Your code may look slightly different (but it shouldnt be TOO different)
//depending on how you wrote your functions. So please don't copy and paste this code.
int main(){

    string inputFile = "/home/fred/CmpE126_TA/LabExam1/inputfile.txt";
    string outputFile = "/home/fred/CmpE126_TA/LabExam1/outputfile.txt";
    ofstream outputfile(outputFile)

    //Read from File and print to output file.
    Zoo MyZoo;
    MyZoo.ImportFromFile(inputFile);
    MyZoo.PrintToFile(outputfile);
    outputfile << endl;;

    //Append and Animal to the array/vector in ZooObj and print to output file.
    //Again this part will look different depending on how you choose to initalize your Animal object
    MyZoo.append(Animal("Tiger", "Orange", 4));
    MyZoo.PrintToFile(outputfile);
    outputfile << endl;

    //Remove the last Animal object from the vector/array and print to output file.
    MyZoo.remove();
    MyZoo.PrintToFile(outputfile);
    outputfile << endl;

    //Sort the vector/array based on number of legs ane print to output file.
    MyZoo.sort();
    MyZoo.PrintToFile(outputfile);
    outputfile << endl;


    //Problems 4,5,6 below.
    //FINISH Problems 1,2,3 before work on 4,5,6. SO DONT SCROLL DOWN UNTIL YOU DO.








































    //Median
    outputfile << "Median:" << endl;
    outputfile << MyZoo.FindMedian();
    outputfile << endl;

    //Less than 4 Legs
    outputfile << "Less than 4 legs:" << endl;
    MyZoo.LessThan4(outputfile);
    outputfile << endl;

    //Sort Alphabetically
    MyZoo.SortAlpha();
    MyZoo.PrintToFile(outputfile);

    outputfile.close();
    return 0;
}
