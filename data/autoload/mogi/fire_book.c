// ħ��֮��

inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIR"�����澭"NOR, ({ "fire_book" }));
	set_weight(100);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long",
			"����һ����Ƥ�ʻ��ɫ�������л��淢ɢ���ؼ���ֻ�о�ħ���״�
��������ķ����˲��ܿ�(read fire_book)��\n");
		set("value", 10);
		set("material", "paper");
	}
        setup();
}

void init()
{
add_action("do_read","read");
}

int do_read(string str)
{
  object me=this_player();
  if(str!="fire_book") {
  tell_object(me,"�����ʲô?\n");
  return -1;
                       }
  else if (!me->query("quest/gold-fire")){
  tell_object(me,"��ûѧ��\��\��\��\���ķ�����Ҳ��������\n");
  return -1;
                                         }
  else if(me->query_skill("fireforce",1) > 1){
  tell_object(me,"���Ѿ�ѧ���ˡ�\n");
  return -1;
                                             }
  else {
  tell_object(me,"���������ϵĿھ�����һ�飬�������ܿ�ʼ���ֻ��棬ɲ�Ǽ�
����������һ���졣

�������д�ţ���\��\��\���÷���perform fireforce.gold-fire\n");
  me->set_skill("fireforce",25);
  return 1;
       }      
} 
