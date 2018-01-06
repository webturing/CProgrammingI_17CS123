int left(int p,int q)
{
    return q+1==p||(p==0&&q==4);
}

int right(int p,int q)
{
    return left(q,p);
}
int near(int p,int q)
{
    return left(p,q)||right(p,q);
}
int zhao=0,qian,sun,li,zhou;
int main()
{
    for(qian=1;qian<=4;++qian)
        for(sun=1;sun<=4;++sun)
        for(li=1;li<=4;++li)
    {
        if(qian==sun||qian==li||sun==li)
            continue;
        zhou=10-qian-sun-li;

        ///周回忆说：“吃饭时，赵坐在钱旁边，
        int zp=near(zhao,qian);

       /// 钱的左边是孙或李”；
         int zq=left(sun,qian)||left(li,qian);
        ///李回忆说：“钱坐在孙左边，
        int lp=left(qian,sun);
        ///我挨着孙坐”。
        int lq=near(li,sun);
        if(zp+zq+lp+lq==0)
        {
                 printf("%d %d %d %d %d\n",zhao=0,qian,sun,li,zhou);
        }

    }
}
