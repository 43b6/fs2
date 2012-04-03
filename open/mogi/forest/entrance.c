#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", HIW"����¥"NOR);
  set ("long", @LONG
�����������е����һ��, ���˿�����, ������в���˼��,
��Χ����һ�Ѷѵİ׹�, �׹���ɢ����һ�Ѷѵ�������װ��, ��
�����㽫�������۵�ʮ��ʱ, ¥���Ѿ��嵽������, ��������
��,�����ʱ��֪���롣
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : "/open/gsword/room/g5-1.c",
  //"out" : __DIR__"room1.c",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/star/npc/star2.c" : 1,
]));

  setup();
}
void init()
{
        add_action("do_search", "search");
        add_action("do_jump","jump");
	add_action("do_enter","enter");
}

int do_jump(string str){
 int exp;  
 object me;
 string name;
 me = this_player();
 exp=me->query("combat_exp",1);
 name=me->query("name");

	if(!str || str != "hole")
	{
        tell_object(me,"�����������\n");
	return 1;
        }
	if(present("starman",environment(me)))
	{
        if(me)
        tell_object(me,HIY"����˵����û����Ҿ���ȥ�����أ�\n"NOR);
        return 0;
	}
	if(exp < 340000)
	{
        tell_object(me,"�㾭��ֵ����������ħ��Ҳ��ͽȻ������\n");
        return 0;
        }
        tell_object(me,"�������������ɫ�����У���ʱ���ǻ��ԣ����Ժ����б�����ĳһ�ط�.....��\n");
        tell_object(users(),HIB"
                   ����������ˮ������
                                     ׳ʿһȥ�ⲻ��������         

      "HIM"�������������ܲ���ħ�����ڽ�������..."+HIY+name+HIM"��Ȼ̤����Զ��
      ħ���·;������������֮�����书��ƽħ������Σ�����������...
                   
"NOR);

            me->move("/open/mogi/forest/room1");
            return 1;

            
}

int do_enter(string str)
{
   object me = this_player();
  if(me->query("liyu")==2)
   me->move("/open/gsword/room/appo/liyu.c");
   return 1;
}

int do_search()
{
	object me;
	me = this_player();
	tell_object(me,"���Ұ��ң�������ǽ�Ϸ���һ����ɫ������(hole)���ֹ���ģ���(jump)��ȥ��֪�ᵽ����?\n");
	return 1;
}

int valid_leave(object me, string dir)
{
	if( dir=="up" && present("starman",environment(me)))
	return notify_fail(HIY"����˵����û����Ҿ���ȥ�����أ�\n"NOR);
	return ::valid_leave(me,dir);

}
