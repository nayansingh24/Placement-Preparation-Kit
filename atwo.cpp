#include "atwo.h"
#include "ui_atwo.h"
#include"aone.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include<QStringList>
#include <iostream>

#include<QDesktopServices>
atwo::atwo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::atwo)
{
    ui->setupUi(this);
    QStringList list;
    list << "Analysis of Algorithms" << "Searching and Sorting" << "Greedy Algorithms" << "Dynamic Programming" << "Pattern Searching" << "Backtracking" << "Divide and Conquer" << "Bit Algorithms"  << "Branch and Bound";
    ui->setupUi(this);
    QFile file("C:/Users/nayan/Desktop/New Text Document.txt");

    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"title","file not found!");
    }

    QTextStream in(&file);
    QString text = in.readAll();
    ui->label->setText(text);
    int i = list.indexOf(text,0);
    file.flush();
    file.close();
    //cout<<text;
switch(i)
{
case 0:
         {
          QStringList list1;
          list1 << "Asymptotic Analysis" << "Worst, Average and Best Cases" <<"Asymptotic Notations" << "Little o and little omega notations" ;
          ui->comboBox->addItems(list1);
          break;
          }

case 1:
          {
          QStringList list1;
          list1 << "Linear Search"<<"Binary Search"<<"Exponential Search"<<"Selection Sort"<<"Bubble Sort"<<"Insertion Sort"<<"Merge Sort"<<"QuickSort";
          ui->comboBox->addItems(list1);
          break;
          }
            \
case 2:
          {
          QStringList list1;
          list1 << "Activity Selection Problem"<<"Huffman Coding"<<"Job Sequencing Problem";
          ui->comboBox->addItems(list1);
          break;
          }

case 3:
          {
          QStringList list1;
          list1 << "Overlapping Subproblems Property"<<"Longest Increasing Subsequence"<<"Longest Common Subsequence"<<"Coin Change"<<"Longest Palindromic Subsequence"<<"Egg Dropping Puzzle";
          ui->comboBox->addItems(list1);
          break;
          }

case 4:
          {
          QStringList list1;
          list1 << "Naive Pattern Searching"<<"KMP Algorithm"<<"Rabin-Karp Algorithm"<<"Suffix Array"<<"Anagram Substring Search (Or Search for all permutations)";
          ui->comboBox->addItems(list1);
          break;
          }

 case 5:
          {
          QStringList list1;
          list1 << "Print all permutations of a given string"<<"The Knight’s tour problem"<<"Rat in a Maze"<<"Subset Sum";
          ui->comboBox->addItems(list1);
          break;
          }

 case 6:
          {
          QStringList list1;
          list1 <<"Write your own pow(x, n) to calculate x*n"<<"Median of two sorted arrays"<<"Count Inversions"<<"Closest Pair of Points";
          ui->comboBox->addItems(list1);
          break;
          }

 case 7:
          {
          QStringList list1;
          list1 << "Find the element that appears once"<<"Detect opposite signs"<<"Set bits in all numbers from 1 to n"<<"Swap bits"<<"Add two numbers";
          ui->comboBox->addItems(list1);
          break;
          }
  case 9:
          {
          QStringList list1;
          list1 << "Implementation of 0/1 Knapsack"<<"8 puzzle Problem"<<"Traveling Salesman Problem"<<"Job Assignment Problem"<<"N Queen Problem";
          ui->comboBox->addItems(list1);
          break;
         }
    }
QObject::connect(ui->pushButton, SIGNAL(clicked()),this, SLOT(on_pushButton_clicked()));// Dialog2::on_pushButton_clicked(j);
QObject::connect(ui->pushButton_2, SIGNAL(clicked()),this, SLOT(on_pushButton_2_clicked()));
//QObject::connect(ui->pushButton, SIGNAL(clicked()),this, SLOT(on_pushButton_clicked()));
}

atwo::~atwo()
{
    delete ui;
}

void atwo::on_pushButton_clicked()
{
    QStringList list2;
    int index = this->i;
    list2 << "C:/Users/nayan/Desktop/Qt/Array1/Algo/Asymptotic_Analysis.txt" <<"C:/Users/nayan/Desktop/Qt/Array1/Algo/Worst_Average_and_best.txt"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/Asymptotic_Notation.txt"  << "C:/Users/nayan/Desktop/Qt/Array1/Algo/littel_O_littel_omega.txt" << "C:/Users/nayan/Desktop/Qt/Array1/Algo/linear_search.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Algo/binary_search.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Algo/exponential_search.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Algo/selection_sort.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Algo/bubble_sort.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Algo/insertion_sort.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/merge_sort.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/quick_sort.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/activity_selection_problem.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/huffman_coding.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/overlapping_subproblems_problem.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/longest)increasing_subsequence.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/longest_common_subsequence.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/coin_change.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/longest_pailendromic_subsequenc.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/egg_dropping_problem.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/naive_pattern_matching.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/Kmp_pattern.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/rabin_carp.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/suffix_array.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/anagram_substring_Search.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/print_all_the_permutation_of_string.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/knight_tour_problem.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/Rat_in_maze.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/subset_problem.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/pow(x,y).cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/median_of_two_sorted_arrays_of_same_size.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/count_inversions.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/closest_pair_of_points.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/find_the_element_that_apperas_once.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/detect_if_two_numbers_have_opposite_sign.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/count_total_set_bits_in_all_numbers_from_1_to_n.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/swap_bits.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/add_two_numbers_without_arithmetic_operators.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/knapsack.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/8_puzzle_problem.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/travelling_salesman_problem.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/job_assignment_problem.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/N_quuen_problem.cpp";
    QDesktopServices::openUrl(QUrl(list2.at(index),QUrl::TolerantMode));
    return;
}

void atwo::on_pushButton_2_clicked()
{
    QStringList list2;
    int index = this->i;
    list2 << "C:/Users/nayan/Desktop/Qt/Array1/Algo/Asymptotic_Analysis.txt" <<"C:/Users/nayan/Desktop/Qt/Array1/Algo/Worst_Average_and_best.txt"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/Asymptotic_Notation.txt"  << "C:/Users/nayan/Desktop/Qt/Array1/Algo/littel_O_littel_omega.txt" << "C:/Users/nayan/Desktop/Qt/Array1/Algo/linear_search.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Algo/binary_search.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Algo/exponential_search.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Algo/selection_sort.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Algo/bubble_sort.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Algo/insertion_sort.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/merge_sort.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/quick_sort.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/activity_selection_problem.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/huffman_coding.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/overlapping_subproblems_problem.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/longest)increasing_subsequence.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/longest_common_subsequence.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/coin_change.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/longest_pailendromic_subsequenc.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/egg_dropping_problem.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/naive_pattern_matching.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/Kmp_pattern.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/rabin_carp.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/suffix_array.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/anagram_substring_Search.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/print_all_the_permutation_of_string.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/knight_tour_problem.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/Rat_in_maze.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/subset_problem.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/pow(x,y).cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/median_of_two_sorted_arrays_of_same_size.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/count_inversions.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/closest_pair_of_points.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/find_the_element_that_apperas_once.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/detect_if_two_numbers_have_opposite_sign.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/count_total_set_bits_in_all_numbers_from_1_to_n.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/swap_bits.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/add_two_numbers_without_arithmetic_operators.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/knapsack.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/8_puzzle_problem.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/travelling_salesman_problem.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/job_assignment_problem.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/N_quuen_problem.cpp";
    QDesktopServices::openUrl(QUrl(list2.at(index),QUrl::TolerantMode));

    return;
}
void atwo::on_comboBox_currentTextChanged(const QString &arg1)
{
    QStringList list1;
    QStringList list2;
    list1 << "Asymptotic Analysis" << "Worst, Average and Best Cases" <<"Asymptotic Notations" << "Little o and little omega notations"  << "Linear Search"<<"Binary Search"<<"Exponential Search"<<"Selection Sort"<<"Bubble Sort"<<"Insertion Sort"<<"Merge Sort"<<"QuickSort"<< "Activity Selection Problem"<<"Huffman Coding"<<"Job Sequencing Problem"<< "Overlapping Subproblems Property"<<"Longest Increasing Subsequence"<<"Longest Common Subsequence"<<"Coin Change"<<"Longest Palindromic Subsequence"<<"Egg Dropping Puzzle"<< "Naive Pattern Searching"<<"KMP Algorithm"<<"Rabin-Karp Algorithm"<<"Suffix Array"<<"Anagram Substring Search (Or Search for all permutations)"<< "Print all permutations of a given string"<<"The Knight’s tour problem"<<"Rat in a Maze"<<"Subset Sum"<<"Write your own pow(x, n) to calculate x*n"<<"Median of two sorted arrays"<<"Count Inversions"<<"Closest Pair of Points"<< "Find the element that appears once"<<"Detect opposite signs"<<"Set bits in all numbers from 1 to n"<<"Swap bits"<<"Add two numbers"<< "Implementation of 0/1 Knapsack"<<"8 puzzle Problem"<<"Traveling Salesman Problem"<<"Job Assignment Problem"<<"N Queen Problem";
    list2 << "C:/Users/nayan/Desktop/Qt/Array1/Algo/Asymptotic_Analysis.txt" <<"C:/Users/nayan/Desktop/Qt/Array1/Algo/Worst_Average_and_best.txt"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/Asymptotic_Notation.txt"  << "C:/Users/nayan/Desktop/Qt/Array1/Algo/littel_O_littel_omega.txt" << "C:/Users/nayan/Desktop/Qt/Array1/Algo/linear_search.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Algo/binary_search.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Algo/exponential_search.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Algo/selection_sort.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Algo/bubble_sort.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Algo/insertion_sort.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/merge_sort.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/quick_sort.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/activity_selection_problem.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/huffman_coding.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/overlapping_subproblems_problem.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/longest)increasing_subsequence.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/longest_common_subsequence.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/coin_change.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/longest_pailendromic_subsequenc.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/egg_dropping_problem.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/naive_pattern_matching.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/Kmp_pattern.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/rabin_carp.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/suffix_array.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/anagram_substring_Search.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/print_all_the_permutation_of_string.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/knight_tour_problem.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/Rat_in_maze.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/subset_problem.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/pow(x,y).cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/median_of_two_sorted_arrays_of_same_size.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/count_inversions.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/closest_pair_of_points.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/find_the_element_that_apperas_once.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/detect_if_two_numbers_have_opposite_sign.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/count_total_set_bits_in_all_numbers_from_1_to_n.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/swap_bits.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/add_two_numbers_without_arithmetic_operators.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/knapsack.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/8_puzzle_problem.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/travelling_salesman_problem.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/job_assignment_problem.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Algo/N_quuen_problem.cpp";
    int j = list1.indexOf(arg1,0);
   // cout << j;
    this->i=j;
    // Dialog2::on_pushButton_clicked(j);
    QFile file1(list2.at(j));
    if(!file1.open(QFile::ReadOnly | QFile::Text))
    {
    QMessageBox::warning(this,"title","file not found!");
    }
    QTextStream in1(&file1);
    QString code = in1.readAll();
    ui->textBrowser->setText(code);
    file1.flush();
    file1.close();
    //Dialog2::on_pushButton_clicked(j);
    //QObject::connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(on_pushButton_clicked(j)));
}

void atwo::on_pushButton_3_clicked()
{
    hide();
    aone as;
    as.setModal(true);
    as.exec();
}
