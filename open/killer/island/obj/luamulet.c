inherit ITEM;
void create ()
{
set_name("³�ڵĻ����",({"luton's amulet","amulet"}));
set_weight(10);
    if(clonep())
        set_default_object(__FILE__);
    else{
        set("long","����һ����Ϊ��ͨ�Ļ������³�ڽ������Ψһ������\n");
	set("value",1);
	set("unit","��");
	setup();
}}
