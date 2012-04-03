#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "�ɽ���ǰɽ");
	set("long", "          
�����ǰ���Ǵ�ֱ���ͱڣ��⻬����һ����Ҳ�޷��������Ÿ���ά�����ͱ�(cliff)��
��࣬��ɫ������ɫ��������ʹ���뿴�����Щ�������Ǹ߶�ʵ��̫��������ôŬ
����Ҳ�޷��Ƹ���ϸ��        

");

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"lroad3",
  "east" : __DIR__"lroad1",
]) );

  set("outdoors", "/open/gsword/room" );

  setup();
}

void init()
{
    add_action("do_enter","pass");
    add_action("do_search","search");
}

int do_enter(string str)
{
   object me = this_player();
if(me->query("quests/yan")==4)
{
      tell_object(me,"�㿴�˿�Ͽ��.������..�ݵ�һ���ͳ��Ͽ����\n");
       tell_object(me,"�޵�һ��..�����𶥼��Ṧ..�������������\n");
          me->move("/open/gsword/room2/sha1.c");
}
else if( me->query("family/family_name")=="�ɽ���" && me->query("get_sha_sp",1) &&me->query("quests/sunfire")!=1 && me->query("quests/yan")>=2)
   {
   if (me->query("combat_exp")<1000000)
     tell_object(me,"�㿴�˿�Ͽ��..���˿��Լ�..���Ǿ��ò�Ҫ��ȥ����\n");
   else 
    {
       tell_object(me,"�㿴�˿�Ͽ��.������..�ݵ�һ���ͳ��Ͽ����\n");
       tell_object(me,"����߽�Ͽ��..�Ų�һ������..��С�ľͻ�������\n");       
      this_player()->unconcious();
          me->move("/open/gsword/room2/sha1.c");
    }
   }
   return 1;
}

int do_search(string str)
{
   object me = this_player();
if( me->query("family/family_name")=="�ɽ���" && me->query("get_sha_sp",1) &&me->query("quests/yan")>=1)
   {    
   tell_object(me,"��������..���ƺ��ҵ���һ�����Դ�Խ(pass)�Ĳ���\n");
   if (me->query("quests/yan")==1 ) me->set("quests/yan",2);
    }
 return 1;
}
