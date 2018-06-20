#include "dstwo.h"
#include "ui_dstwo.h"
#include<iostream>
#include<QFile>
#include"dsone.h"
#include<QTextStream>
#include<QMessageBox>
#include<QDesktopServices>
using namespace std;
dstwo::dstwo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dstwo)
{
    ui->setupUi(this);
    QStringList list;//list of headings of the page
    list <<"Array:Introduction" <<"Array:Rotation" <<"Array:Searching" << "Array:Sorting"<<"Linked List: Introduction" << "Circular Link List"<< "Doubly Link List"<<"Stack Introduction" << "Design and Implementation Stack"<<"Standard Problems Stack" << "Operations on Stack"<< "Queue Introduction"<< "Queue Implementation"<<"Standard Problems Queue"  << "Introduction Binary Search Tree"<< "Construction & Conversion BST"<<"Check and Smallest/Largest Element" << "Introduction Graph BFS and DFS" << "Graph Cycle"<< "Topological Sorting"<<"Minimum Spanning Tree" <<"Connectivity"<<"Shortest Paths";
    QFile file("C:/Users/nayan/Desktop/New Text Document.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"title","file not found!");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->label->setText(text);
    int j = list.indexOf(text,0);//index of heading of the page
    //cout << j;
    switch(j)
    {
    case 0:
    {
        QStringList list1;
        list1 << "Insertion to Arrays"<<"Deletion from Array";
        ui->comboBox->addItems(list1);
        break;
    }
    case 1:
    {
        QStringList list1;
        list1 << "Program for array rotation"<<"Reversal algorithm for array rotation"<<"Program to cyclically rotate an array by one"<<"Search an element in a sorted and rotated array"<<"Given a sorted and rotated array, find if there is a pair with a given sum";
        ui->comboBox->addItems(list1);
        break;
    }
    case 2:
    {
        QStringList list1;
        //cout << "b";
        list1 <<"Find the Number Occurring Odd Number of Times"<<"Find the Missing Number";
        ui->comboBox->addItems(list1);
        break;
    }
    case 3:
    {
        QStringList list1;
        list1 << "Sorting array except elements in a subarray" <<"Sorting all array elements except one";
        ui->comboBox->addItems(list1);
        break;

    }
    case 4:
    {
        QStringList list1;
        list1 <<"Linked List Insertion"<<"Linked List Deletion (Deleting a given key)"<<"Linked List Deletion (Deleting a key at given position)"<<"Find Length of a Linked List";
        ui->comboBox->addItems(list1);
        break;
    }
    case 5:
    {
        QStringList list1;
        list1 << "Circular Singly Linked List | Insertion"<<"Deletion from a Circular Linked List"<<"Circular Linked List Traversal";
        ui->comboBox->addItems(list1);
        break;
    }
    case 6:
    {
        QStringList list1;
        list1 << "Doubly Linked List Introduction and Insertion"<<"Delete a node in a Doubly Linked List"<<"Reverse a Doubly Linked List";
        ui->comboBox->addItems(list1);
        break;
    }
    case 7:
    {
        QStringList list1;
        list1 <<"Introduction to Stack"<<"Stack in C++ STL";
        ui->comboBox->addItems(list1);
        break;
    }
    case 8:
    {
        QStringList list1;
        list1 << "Implement two stacks in an array"<<"Design a stack with operations on middle element";
        ui->comboBox->addItems(list1);
        break;
    }
    case 9:
    {
        QStringList list1;
        list1 << "Infix to Postfix Conversion using Stack"<<"Check for balanced parentheses in an expression"<<"Next Greater Element";
        ui->comboBox->addItems(list1);
        break;
    }
    case 10:
    {
        QStringList list1;
        list1 <<"Reverse a stack using recursion"<<"Sort a stack using recursion"<<"Sort a stack using a temporary stack";
        ui->comboBox->addItems(list1);
        break;
    }
    case 11:
    {
        QStringList list1;
        list1 << "Queue"<<"Circular Queue";
        ui->comboBox->addItems(list1);
        break;
    }
    case 12:
    {
        QStringList list1;
        list1 <<"Implement Queue using Stacks"<<"LRU Cache Implementation"<<"Implement Stack using Queues"<<"Implementation of Deque using circular array"   ;
        ui->comboBox->addItems(list1);
        break;
    }
    case 13:
    {
        QStringList list1;
        list1 << "Breadth First Traversal or BFS for a Graph"<<"Level Order Tree Traversal"<<"Construct Complete Binary Tree from its Linked List Representation";
        ui->comboBox->addItems(list1);
        break;
    }
    case 14:
    {
        QStringList list1;
        list1 <<"Binary Search Tree Search and Insertion"<<"Binary Search Tree Delete";
        ui->comboBox->addItems(list1);
        break;
    }
    case 15:
    {
        QStringList list1;
        list1 << "Construct BST from given preorder traversal"<<"Binary Tree to Binary Search Tree Conversion"<<"Sorted Linked List to Balanced BST";
        ui->comboBox->addItems(list1);
        break;
    }
    case 16:
    {
        QStringList list1;
        list1 << "A program to check if a binary tree is BST or not"<<"Find k-th smallest element in BST (Order Statistics in BST)"<<"Check if each internal node of a BST has exactly one child";
        ui->comboBox->addItems(list1);
        break;
    }

    case 17:
    {
        QStringList list1;
        list1 <<"Graph and its representations"<< "Breadth First Traversal for a Graph"<<"Depth First Traversal for a Graph"<<"Longest Path in a Directed Acyclic Graph";
        ui->comboBox->addItems(list1);
        break;
    }
    case 18:
    {
        QStringList list1;
        list1 << "Detect Cycle in a Directed Graph"<<"Detect Cycle in a an Undirected Graph"<<"Detect a negative cycle in a Graph (Bellman Ford)";
        ui->comboBox->addItems(list1);
        break;
    }
    case 19:
    {
        QStringList list1;
        list1 << "Topological Sorting"<<"All topological sorts of a Directed Acyclic Graph";
        ui->comboBox->addItems(list1);
        break;
    }
    case 20:
    {
        QStringList list1;
        list1 << "Prim’s Minimum Spanning Tree (MST)"<<"Prim’s MST for Adjacency List Representation"<<"Kruskal’s Minimum Spanning Tree Algorithm";
        ui->comboBox->addItems(list1);
        break;
    }
    case 21:
    {
        QStringList list1;
        list1 <<"Find if there is a path of more than k length from a source" <<"Tug of War"<<"n-Queen’s Problem"<<"Hamiltonian Cycle";
        ui->comboBox->addItems(list1);
        break;
    }

       case 22:
    {
        QStringList list1;
        list1 <<"Dijkstra’s shortest path algorithm"<<"Dijkstra’s Algorithm for Adjacency List Representation"<<"Bellman–Ford Algorithm"<<"Floyd Warshall Algorithm"<<"Shortest Path in Directed Acyclic Graph" ;
        ui->comboBox->addItems(list1);
        break;
    }
    default:
    {
        break;
    }
    }
    QObject::connect(ui->pushButton_EDIT, SIGNAL(clicked()),this, SLOT(on_pushButton_EDIT_clicked()));// Dialog2::on_pushButton_clicked(j);
    QObject::connect(ui->pushButton_RUN, SIGNAL(clicked()),this, SLOT(on_pushButton_RUN_clicked()));
}

dstwo::~dstwo()
{
    delete ui;
}

void dstwo::on_pushButton_EDIT_clicked()
{
    QStringList list2;
    int index = this->i;
    list2 << "C:/Users/nayan/Desktop/Qt/Array1/Array/insert_in_array.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/deletion_in_array.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Array_rotate.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/reversal_algo_roate.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/cyclically_rotate_array.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Search_an_array_rotated_sorted_array.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/pair_with_given_sum_in_sorted_rotated_array.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Find_number_occur_odd_number_of_team.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Find_missing_number.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/sort_array_except_elements_in_subarray.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/sort_array_except_one.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/link_list_insertion.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/link_list_deletion_of_given_key.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/link_list_deletion_of_node_given_position.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/find_the_length_of_link_list.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/circular_link_list_insertion.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/circular_link_list_deletion.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/circular_link_list_traversal.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/doubly_link_list_insertion.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/doubly_link_list_deletion.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/doubly_link_list_reverse.cpp" <<  "C:/Users/nayan/Desktop/Qt/Array1/Array/stack_introduction.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/stack_in_stl.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/implement_two_stack_in_an_array.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/design_a_stack_with_operation_on_middle_element.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/infix_to_postfix.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/check_for_balanced+parenthesis.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Next_greater_element.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/reverse_a_stack_using_recursion.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/sort_a_stack_using_recursion.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/sort_using_temp_stack.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Queue_operattion.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/circular_queue.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Implement_queue_using_stack.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/LRU.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/implement_stack_using_queue.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/implement_deque_using_circular_array.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/breadth_first_search.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/level_order_traversal.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/construct_complete_binary_tree.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/BST_insertion.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/BST_delete.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/construct_a_tree_using_preorder.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/binTree_to_BinaryTree_Conversion.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/sorted_link_list_to_balanced_bst.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Tranform_a_bst_to_greater_sum_tree.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/A_program_to_check_a_tree_is_bst_or_not.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/find_kth_smallest_element_in_bst.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/check_if_each_internal_node_has_one_child.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/graph_representation.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/bfs_for_graph.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/dfs_for_graph.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/longest_path_in_a_directed_acyclic_graph.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/detect_a_cycle_in_directed_graph.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/detect_a_cycle_in_undirected_graph.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/detect_a_negative_cycle_in_graph.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/topologiocal_sort.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/all_topological_sort_in_dag.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/prims_minimum_spannig_tree.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/prims_mst_adjacency_list.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/krushkal_algorithm_mst.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/find_if_there_is_path_of_more_than_k_length.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/tug_of_war.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/n_Queen_problem.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/hamiltonian_circuit.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/djkstra_shortest_path_algo.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/djkstra_shortest_path_algo_adjacency_list.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/bellmon_ford_algo.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Floyd_warshall_algo.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/shortest_path_of_directed_acyclic_graph.cpp";
    QDesktopServices::openUrl(QUrl(list2.at(index),QUrl::TolerantMode));
    return;

}
void dstwo::on_pushButton_RUN_clicked()
{
    QStringList list2;
    int index = this->i;
    list2 << "C:/Users/nayan/Desktop/Qt/Array1/Array/insert_in_array.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/deletion_in_array.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Array_rotate.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/reversal_algo_roate.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/cyclically_rotate_array.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Search_an_array_rotated_sorted_array.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/pair_with_given_sum_in_sorted_rotated_array.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Find_number_occur_odd_number_of_team.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Find_missing_number.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/sort_array_except_elements_in_subarray.exe"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/sort_array_except_one.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/link_list_insertion.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/link_list_deletion_of_given_key.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/link_list_deletion_of_node_given_position.exe"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/find_the_length_of_link_list.exe"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/circular_link_list_insertion.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/circular_link_list_deletion.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/circular_link_list_traversal.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/doubly_link_list_insertion.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/doubly_link_list_deletion.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/doubly_link_list_reverse.exe" <<  "C:/Users/nayan/Desktop/Qt/Array1/Array/stack_introduction.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/stack_in_stl.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/implement_two_stack_in_an_array.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/design_a_stack_with_operation_on_middle_element.exe"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/infix_to_postfix.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/check_for_balanced+parenthesis.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Next_greater_element.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/reverse_a_stack_using_recursion.exe"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/sort_a_stack_using_recursion.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/sort_using_temp_stack.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Queue_operattion.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/circular_queue.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Implement_queue_using_stack.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/LRU.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/implement_stack_using_queue.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/implement_deque_using_circular_array.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/breadth_first_search.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/level_order_traversal.exe"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/construct_complete_binary_tree.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/BST_insertion.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/BST_delete.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/construct_a_tree_using_preorder.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/binTree_to_BinaryTree_Conversion.exe"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/sorted_link_list_to_balanced_bst.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Tranform_a_bst_to_greater_sum_tree.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/A_program_to_check_a_tree_is_bst_or_not.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/find_kth_smallest_element_in_bst.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/check_if_each_internal_node_has_one_child.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/graph_representation.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/bfs_for_graph.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/dfs_for_graph.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/longest_path_in_a_directed_acyclic_graph.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/detect_a_cycle_in_directed_graph.exe"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/detect_a_cycle_in_undirected_graph.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/detect_a_negative_cycle_in_graph.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/topologiocal_sort.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/all_topological_sort_in_dag.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/prims_minimum_spannig_tree.exe"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/prims_mst_adjacency_list.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/krushkal_algorithm_mst.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/find_if_there_is_path_of_more_than_k_length.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/tug_of_war.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/n_Queen_problem.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/hamiltonian_circuit.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/djkstra_shortest_path_algo.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/djkstra_shortest_path_algo_adjacency_list.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/bellmon_ford_algo.exe" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Floyd_warshall_algo.exe"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/shortest_path_of_directed_acyclic_graph.exe";
    QDesktopServices::openUrl(QUrl(list2.at(index),QUrl::TolerantMode));
    return;
}
void dstwo::on_comboBox_currentTextChanged(const QString &arg1)
{
    QStringList list1;
    QStringList list2;
    list1<< "Insertion to Arrays"<<"Deletion from Array"<< "Program for array rotation"<<"Reversal algorithm for array rotation"<<"Program to cyclically rotate an array by one"<<"Search an element in a sorted and rotated array"<<"Given a sorted and rotated array, find if there is a pair with a given sum"<<"Find the Number Occurring Odd Number of Times"<<"Find the Missing Number"<<"Sorting array except elements in a subarray" <<"Sorting all array elements except one" <<"Linked List Insertion"<<"Linked List Deletion (Deleting a given key)"<<"Linked List Deletion (Deleting a key at given position)"<<"Find Length of a Linked List"<< "Circular Singly Linked List | Insertion"<<"Deletion from a Circular Linked List"<<"Circular Linked List Traversal"<< "Doubly Linked List Introduction and Insertion"<<"Delete a node in a Doubly Linked List"<<"Reverse a Doubly Linked List"<<"Introduction to Stack"<<"Stack in C++ STL"<<"Implement two stacks in an array"<<"Design a stack with operations on middle element"<< "Infix to Postfix Conversion using Stack"<<"Check for balanced parentheses in an expression"<<"Next Greater Element"<<"Reverse a stack using recursion"<<"Sort a stack using recursion"<<"Sort a stack using a temporary stack"<<"Queue"<<"Circular Queue"<<"Implement Queue using Stacks"<<"LRU Cache Implementation"<<"Implement Stack using Queues"<<"Implementation of Deque using circular array"<< "Breadth First Traversal or BFS for a Graph"<<"Level Order Tree Traversal"<<"Construct Complete Binary Tree from its Linked List Representation"<<"Binary Search Tree Search and Insertion"<<"Binary Search Tree Delete"<< "Construct BST from given preorder traversal"<<"Binary Tree to Binary Search Tree Conversion"<<"Sorted Linked List to Balanced BST"<<"Transform a BST to greater sum tree"<< "A program to check if a binary tree is BST or not"<<"Find k-th smallest element in BST (Order Statistics in BST)"<<"Check if each internal node of a BST has exactly one child"<<"Graph and its representations"<< "Breadth First Traversal for a Graph"<<"Depth First Traversal for a Graph"<<"Longest Path in a Directed Acyclic Graph"<< "Detect Cycle in a Directed Graph"<<"Detect Cycle in a an Undirected Graph"<<"Detect a negative cycle in a Graph (Bellman Ford)"<< "Topological Sorting"<<"All topological sorts of a Directed Acyclic Graph"<< "Prim’s Minimum Spanning Tree (MST)"<<"Prim’s MST for Adjacency List Representation"<<"Kruskal’s Minimum Spanning Tree Algorithm"<<"Find if there is a path of more than k length from a source" <<"Tug of War"<<"n-Queen’s Problem"<<"Hamiltonian Cycle"<<"Dijkstra’s shortest path algorithm"<<"Dijkstra’s Algorithm for Adjacency List Representation"<<"Bellman–Ford Algorithm"<<"Floyd Warshall Algorithm"<<"Shortest Path in Directed Acyclic Graph";
    list2 << "C:/Users/nayan/Desktop/Qt/Array1/Array/insert_in_array.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/deletion_in_array.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Array_rotate.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/reversal_algo_roate.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/cyclically_rotate_array.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Search_an_array_rotated_sorted_array.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/pair_with_given_sum_in_sorted_rotated_array.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Find_number_occur_odd_number_of_team.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Find_missing_number.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/sort_array_except_elements_in_subarray.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/sort_array_except_one.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/link_list_insertion.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/link_list_deletion_of_given_key.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/link_list_deletion_of_node_given_position.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/find_the_length_of_link_list.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/circular_link_list_insertion.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/circular_link_list_deletion.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/circular_link_list_traversal.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/doubly_link_list_insertion.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/doubly_link_list_deletion.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/doubly_link_list_reverse.cpp" <<  "C:/Users/nayan/Desktop/Qt/Array1/Array/stack_introduction.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/stack_in_stl.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/implement_two_stack_in_an_array.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/design_a_stack_with_operation_on_middle_element.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/infix_to_postfix.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/check_for_balanced+parenthesis.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Next_greater_element.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/reverse_a_stack_using_recursion.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/sort_a_stack_using_recursion.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/sort_using_temp_stack.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Queue_operattion.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/circular_queue.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Implement_queue_using_stack.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/LRU.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/implement_stack_using_queue.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/implement_deque_using_circular_array.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/breadth_first_search.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/level_order_traversal.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/construct_complete_binary_tree.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/BST_insertion.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/BST_delete.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/construct_a_tree_using_preorder.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/binTree_to_BinaryTree_Conversion.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/sorted_link_list_to_balanced_bst.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Tranform_a_bst_to_greater_sum_tree.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/A_program_to_check_a_tree_is_bst_or_not.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/find_kth_smallest_element_in_bst.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/check_if_each_internal_node_has_one_child.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/graph_representation.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/bfs_for_graph.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/dfs_for_graph.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/longest_path_in_a_directed_acyclic_graph.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/detect_a_cycle_in_directed_graph.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/detect_a_cycle_in_undirected_graph.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/detect_a_negative_cycle_in_graph.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/topologiocal_sort.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/all_topological_sort_in_dag.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/prims_minimum_spannig_tree.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/prims_mst_adjacency_list.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/krushkal_algorithm_mst.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/find_if_there_is_path_of_more_than_k_length.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/tug_of_war.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/n_Queen_problem.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/hamiltonian_circuit.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/djkstra_shortest_path_algo.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/djkstra_shortest_path_algo_adjacency_list.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/bellmon_ford_algo.cpp" << "C:/Users/nayan/Desktop/Qt/Array1/Array/Floyd_warshall_algo.cpp"<< "C:/Users/nayan/Desktop/Qt/Array1/Array/shortest_path_of_directed_acyclic_graph.cpp";
    int k =0;
    k=list1.indexOf(arg1,0);
    //cout << k;
    this->i=k;
 //   QObject::connect(ui->pushButton_EDIT, SIGNAL(clicked()),this, SLOT(on_pushButton_EDIT_clicked()));// Dialog2::on_pushButton_clicked(j);
   // QObject::connect(ui->pushButton_EDIT, SIGNAL(clicked()),this, SLOT(on_pushButton_EDIT_clicked()));
    QFile file1(list2.at(k));
    if(!file1.open(QFile::ReadOnly | QFile::Text))
    {
    QMessageBox::warning(this,"title","file not found!");
    }
    QTextStream in1(&file1);
    QString code = in1.readAll();
    ui->textBrowser->setText(code);
    file1.flush();
    file1.close();
}

void dstwo::on_pushButton_clicked()
{
    hide();
    dsone sp;
    sp.setModal(true);
    sp.exec();
}
