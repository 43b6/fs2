// waterskin.c

inherit ITEM;
inherit F_LIQUID;

int extra_func();
						
void create()
{
	set_name("��", ({ "tea" }) );
	set_weight(700);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һ����ζ�˱ǵĲ衣\n");
		set("unit", "��");
		set("value", 50);
		set("����", 5);
	}

	// The liquid contained in the container is independent, we set a copy
	// in each cloned copy.
	set("Һ��", ([
		"����": "��",
		"����": "������",
		"ʣ": 5,
		"ֹ��" : 30,
		"���⺯��" : (: extra_func :)
	]) );
        setup();
}

int extra_func()
{
   if (!query("Һ��ʣ")) {
    write ("������Ѿ�����ȹ���, ��˳�ֶ�������֮��.\n");
    destruct(this_object());
    return 1;
  }
  return 0;
}
