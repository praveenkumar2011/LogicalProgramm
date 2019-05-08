int SecondLargetNumber(vector<int> vectdata)
{
    int secondLargetData=0,MaxData =0;
    MaxData = secondLargetData =vectdata.at(0);
        for(int j=1;j<vectdata.size();j++)
        {
            if(MaxData <= vectdata.at(j))
            {
                MaxData = vectdata.at(j); // Max data of list filtered out
            }
            else
            {
            // second largest data filtered out
                if(secondLargetData < MaxData && secondLargetData < vectdata.at(j))
                secondLargetData =vectdata.at(j);
            }
        }
return secondLargetData;
}

int main()
{
    vector<int> data ={10,45,78,67,301,33,107,98};
    int secondData =0;
    secondData = SecondLargetNumber(data);
    cout<<"data = "<<secondData<<endl;
    return 0;
}
