#include <ansi.h>
#include <room.h>
inherit ROOM;
                
void create ()
{
  set ("short", "��Ϣ��");
  set ("long", @LONG
 ����ɱ���������������Ϣ�ĵط�  
�������һСˮ��(water),��ˮ�ǳ��峺,
�����������´���һ�������ȵ�ˮ��,����ǵ���ˮԴ��������


LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r4",
  "east" : __DIR__"r6",
  "south" : __DIR__"r8.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "water" : "��ˮ�ǳ��峺,������������ˮ(drink) 
",
   ]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/killer/npc/trainer2.c" : 2,]));
  set("resource", ([ /* sizeof() == 1 */
  "water" : 1,
]));

  setup();
}
void init()
{
   add_action("do_drink", ({"drink"}) );
   add_action("do_enter",({"enter"}));
}
int do_drink(string arg)
{
  object me;
  if (!arg || arg=="" )
  {
  me = this_player();
  if ( (int)me->query("water") >= (int)me->max_water_capacity() )
    {
    tell_object(me,"���Ѿ�һ��ˮҲ�Ȳ�����.......\n");
    return 1;
    }
    tell_object(me,"��ӳ���Ҩ�˼���ˮ��......\n");

    me->add("water",40);
  return 1;  
}
    return 1;
}
int do_enter(string arg)
{
   object who;
   who=this_player();
   if(who->query("class")!="killer")
   return notify_fail("����ɱ��ר���ܵ�,һ�����޷�����!\n");
   if((arg="water") || (arg=="water")) {
   message_vision(GRN"$N������Сˮ����\n"NOR,who);
   tell_object(who,"\n��ֻ������������������������
    ������������������������������������������������������������\n\n");
   tell_object(who,HIW"ֻ��һ��ǿ���ˮ��ӭ��������� \n"NOR);
   tell_object(who,"�����޷�����֮�±�ˮ���������� \n");
tell_object(who,HIC"\n��о�ˮ�Ƽ���,�����ץ֮��,��סһ�Ŵ�ʯͷ \n\n"NOR);
	who->move(__DIR__"r7.c");
   return 1;
   }
      return 0;
}
