 // Room: /open/poison/room/room19
#include <ansi.h>
#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create()
{
  set ("short", "�η�");
  set ("long", @LONG
�����Ĵ�������ǽͭ�ڵģ�����ڤ��ħ�����������ط�
֮�ã����ﲻ������ǰ����ң������ԵĶ������룬ֻ�ǵ�
��������һ�㱡���Ļҳ�����������һС��ʱ������̤���
�أ���ϸһ����ǽ�Ǵ��ѷ���һ�������۵����ӡ�
LONG);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"path13",
]));
  set("need_key/south",1);
  create_door("south",HIB"��ɫ����"NOR,"north",DOOR_LOCKED);
  set("box_get",0);
  setup();
}
void reset()
{
  set("box_get",0);
  :: reset();
}
void init()
{
  add_action("do_search","search");
  add_action("do_push","push");
  add_action("do_look","look");
  add_action("do_look","l");
  add_action("do_get","get");
}
int do_get(string str)
{
  string str1, str2;
  object me, book;
  if(sscanf(str,"%s from %s",str1,str2) != 2)
        return 0;
  if( str1 != "book" || str2 != "box")
        return 0;
  if(query("box_get"))
	{
	  tell_object(me,"����ӿ������ó�ʲôѽ! \n");
	  return 1;
	}
  set("box_get",1);
  me = this_player();
  book = new(POISON_OBJ"box_book");
  book->move(me);
  message_vision("$N�������ѳ�һ��������\n",me);
  return 1;
}
int do_search(string str)
{
  object me = this_player();
  object ob;
  if(!str || str != "hole" || !me->query_temp("box_moved"))
        return 0;
  if(me->query("lotch") == 5) {
        tell_object(me,HIC"�����������֮���㷢����һ��������\n"NOR);
        tell_object(me,HIC"��ȡ����ϸһ������! ���Ǵ�˵�е���������\n"NOR);
	me->set("lotch",6);
        ob = new("/open/gblade/mob/lotch");
        ob->move(me);
        return 1;
      }
  tell_object(me,"����ϸ�Ѳ�ü��飬�����Ҳ����κζ�����\n");
  return 1;
}
int do_look(string str)
{
  object me = this_player();
  if(!str)
        return 0;
  if(str == "box" || str == "����") {
        if(!query("box_get"))
                tell_object(me,"����һ�����ص����䣬�����ڲ��м����顣\n");
        else
                tell_object(me,"����һ�����ص����䣬���ڿտ���Ҳ��ʲô��û�С�\n");
        return 1;
      }

  if(str == "hole" && me->query_temp("box_moved")) {
        tell_object(me,"����һ�������Ե�С�������ڲ�֪���к���? \n");
        return 1;
      }
  return 0;
}
int do_push(string str)
{
  object me = this_player();
  if(!str || str != "box")
        return notify_fail("����Ҫ��ʲô?\n");
  if(me->query_temp("box_moved"))
        return notify_fail("���Ѿ��ƿ�������ѽ��\n");
  tell_object(me,"ͻȻ����������������ʱ����˷����ǹ�Ӱ��\n");
  if(me->query("kar") < 30 && random(me->query_skill("dodge")) < 20) {
        tell_object(me,"һ��С�ģ����㲻���������˼������롣\n");
	me->apply_condition("dark_poison", 3);
       }
  else
        tell_object(me,"�����ˣ�����������е����롣\n");
  me->set_temp("box_moved",1);
  tell_object(me,"���ƿ����Ӻ��㷢��������һС��(hole) ��\n");
  return 1;
}
