// Room: /open/capital/room/D04.c
#include </open/capital/capital.h>
#include <ansi.h>
inherit ROOM;
int flag=0;
void create ()
{
  set ("short", "�ʹ�����");
  set ("long", @LONG
�����ǻʹ������, ����ɭ��, ���յĹ��ź͸ߴ�Ĺ�ǽ͸��һ��
��͢���������, �ʹ����һ�ж������ܵ��ػ��š��ſ�վ����λ����
�Ľ�����, ������ݵ�����, ����һ�ߵ����, ��о�������������
������������
    ��·���п��ʾ��(board).

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "board" : "
            ���ʳ��صأ������˵������ڴ˶�������
            ����Ʒ���ߵĹ�Ա���⣬�����ô��˵���
              �������ɱ���⡣��
                ��Ʒ��ǰ���������ӳ�������
",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/doorsoldier" : 2,
]));
  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"king/kr7-4",
  "south" : __DIR__"r08.c",
]));

  setup();
}
int valid_leave(object who,string dir){
  if(dir=="north" && present("soldier",environment(who)))
   {
    if(dir=="north" && who->query("class")=="officer" && who->query_temp("can_in")!=1)
        return notify_fail(HIY"�ʹ�����˵��:����Ҫ�����Ļ�,���ͷ�ͺ��˰�!!!\n"NOR);
if(dir=="north" && who->query("class")!="officer" && who->query_temp("can_in")!=1)
  return notify_fail("�ʹ����������Ķ���˵:���ڽ��أ������˵Ȳ��ý��롣\n");

     if(dir=="north" && !present("soldier",environment(who)))
{
           if(who->query("class")=="officer")
       {
        message_vision(HIC"hmm,�㻹���ܽ�ȥ�,�ȵ��������������������ܽ�ȥ!!!\n"NOR,who);
      return 0;
       }
        if(!flag)
{
     tell_object(users(),HIR"
��¡һ��~~~~~~~~~

  �ʳǵĴ��ž�Ȼ��"+who->query("name")+"������

  �ʳǽ������곲����,��Ҫ��"+who->query("name")+"������!!!
\n"NOR); 
       flag=1;
    }
  }
}
return :: valid_leave(who,dir);
}
void init()
{
          object me=this_player();
        add_action("do_exert","exert");
         if(me->query("class")!="officer")
         if( present("soldier", environment(me)) ) 
        flag=0;
}
int do_exert(string str)
{
 object me;
 me=this_player();
 if(str=="roar"){
 message_vision(HIC"�ʹ����������Ķ���˵:�ʳǽ�������������������������!!!\n"NOR,me);
 return 1;
                }
 else
 {
 return 0;
 }
}
