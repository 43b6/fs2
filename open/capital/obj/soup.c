// by onion

inherit ITEM;
inherit F_LIQUID;

int extra_func();

void create()
{
	set_name("���Ҽ���", ({ "chicken soup", "soup" }) );
	set_weight(700);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "��������ʳ���洫���ط�, Ҳ������ʳ�õ�����, �����л����˲��ٲ�ҩ, ��˵�ɻָ�����/������\n");
		set("unit", "��");
		set("value", 1000);
		set("����", 5);
	}

	// The liquid contained in the container is independent, we set a copy
	// in each cloned copy.
	set("Һ��", ([
		"����": "��",
		"����": "����",
		"ʣ": 5,
		"ֹ��" : 30,
		"���⺯��" : (: extra_func :)
	]) );
	setup();
}

int extra_func()
{
  if (!query("Һ��/ʣ")) {
    write ("��޼����Ѿ�����ȹ���, ��˳�ֽ�����������֮��.\n");
    destruct(this_object());
    return 1;
  }
  this_player()->receive_heal("kee",10);
  return 0;
}
