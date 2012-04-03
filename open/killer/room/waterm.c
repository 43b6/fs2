#include <ansi.h>
#include <room.h>
inherit ROOM;
                
void create ()
{
  set ("short", "��Ϣ��");
  set ("long", @LONG
����ɱ���ǽ�����ѵ�����Ϣ�ĵط�  
�������һСˮ��(water),��ˮ�ƺ��е��࣬���ǻ��ǿ��Ժȵ�,
�������뻹�ǲ�Ҫ�ȱȽϺã�����ϴ�������ǲ���Ľ��顣
�����������´���һ�������ȵ�ˮ��,����ǵ���ˮԴ��������


LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r0.c",
  "west" : __DIR__"restrm.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "water" : "��ˮ��Ȼ�е����ɫ,�����㻹�ǿ����������ˮ(drink) 
",
   ]));
  set("resource", ([ /* sizeof() == 1 */
  "water" : 1,
]));

 set("objects",([
        "/open/killer/npc/boy": 1,
]));

setup();
}

void init()
{
   add_action("do_drink", ({"drink"}) );
        add_action("do_enter",({"enter"}));
   add_action("do_wash",({"wash"}));
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
    tell_object(me,"��ӳ���Ҩ�˼���ˮ�ȣ����ֳ�ˮ�ƺ��й�ζ......\n");
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
who->move(__DIR__"stonerm.c");
   return 1;
   }
      return 0;
}

int do_wash(string arg)
{
   object who;

   who=this_player();

   if (!present("herb",who))
	return 0;
   if (!who->query_temp("herb_1"))
   {
   	tell_object(who,"\n�㽫��ʿɽ�زݷ����������ɫ��ˮ���У�
		      ������ϴ��������\n\n");
	tell_object(who,HIW"ֻ��һ����ֵ���ɫ�仯���� \n"NOR);
	tell_object(who,"�زݷ���������Ĺ�â��Ӧ�ÿ����˰� ?���� \n");
	who->set_temp("herb_1",1);
	return 1;
   }
   if(who->query_temp("herb_1")==1)
   {
     tell_object(who,HIW"������������һ��ϴ�زݡ��� \n"NOR);
     tell_object(who,"ʹ���زݷ����˽�ɫ�Ĺ�â�����ڿ����ˣ� \n");
     who->set_temp("herb_1",2);
   }
   return 1;
}  

