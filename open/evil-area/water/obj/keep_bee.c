inherit ITEM;

void create()
{
	set_name("���lľ",({"chu-wood","wood"}));
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else
	{
		set("value",100);
		set("unit","��");
		set("long","а������������ķ��ľͷ��ľͷ�����ɢ����һ����ķ��������ζ��\n");
	}
	setup();
}