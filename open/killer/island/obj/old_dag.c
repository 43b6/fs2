inherit ITEM;
void create ()
{
set_name("����ľ�ذ��",({"old dagger","dagger"}));
set_weight(10);
    if(clonep())
        set_default_object(__FILE__);
    else{
        set("long","һ������ľ�ذ��, �ƺ���³����ǰ��ʹ�õĶ���, ���ǽ�������������!!\n");
        set("value",1);
        set("unit","��");
        setup();
}}
