inherit ITEM;
void create()
{
      set_name("��ת[1;33m��[0m��",({"gold_pill"}) );
      set_weight(100);
      if( clonep() )
           set_default_object(__FILE__);
      else {
           set("unit","��");
           set("long","��������һ�ŷǳ����ĵ�ҩ, ������\����\��(adhibit)���������������\n");
           set("value",100000);
           }
      setup();
}

void init()
{
	add_action("do_adhibit","adhibit");
}

int do_adhibit(string str)
{
	object me=this_player();
	object ob=this_object();
	if( str != "gold_pill" )
        {
	write("����ʲô?\n");
        return 1;
	}
if(me->query("quest/catch_thief/gold_pill")==1)
{
write("���Ѿ��Թ��ˡ�\n");
return 1;
}
	  message_vision("$N��$n����, �漴����\��\����\n",me,ob);
	  write("��о�������һ��������������, �����������������������澭��"+
	  "��һ��, ֮������������ˡ�\n");
	  me->add("max_force",20);
          me->set("quest/catch_thief/gold_pill",1);
	  destruct(ob);
          return 1;
}
