inherit ITEM;
void create ()
{
set_name("����",({"note"}));
set_weight(10);
    if(clonep())
        set_default_object(__FILE__);
    else{
        set("long","����д������������Ķ������, ����Ӧ���ø�³Ѱ���һ��!!\n");
        set("value",1);
        set("unit","��");
        setup();
}}
