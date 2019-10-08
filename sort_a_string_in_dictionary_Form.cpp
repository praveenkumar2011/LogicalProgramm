vector<string> SortInDictionaryForm(vector<string> recListData)
{
    string temp;
    for (std::string data : recListData)
        std::cout << data << std::endl;
    for(unsigned int i=0;i<recListData.size();++i)
    {
        for(unsigned j=i+1;j<(recListData.size());++j)
        {
            if(recListData.at(i)>(recListData.at(j)))
            {
                temp = recListData.at(i);
                recListData.at(i) = recListData.at(j);
                recListData.at(j) = temp;
            }
        }

    }
return recListData;
}

int main()
{
    std::initializer_list<string> initList={"KARAN","AMIT","AARTI","ANAMIKA","BASKET","BAG","ZOO","ZEBRA","Abhimanyu"};
    vector<string> listofString(initList);
    listofString = SortInDictionaryForm(listofString);
    cout<<"After Sorting\n"<<endl;
    for (std::string data : listofString)
        std::cout << data << std::endl;
    return 0;
}

/***************************
*Author By Praveen Kumar
***************************/