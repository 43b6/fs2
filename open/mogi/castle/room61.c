
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "�ű���¥");
  set ("long","ǽ���ϵ�������ɫ�Ĺ����ϸһ�����ɿ�������\���������ɵ�������
���������\����ֻ�۾��������������͸�ſֲ�����Ϣ������Ҳ���ź�
��ĵ�̺�����˲�������ض������������ܵ���ħ�ƺ�Ҳ�����������
����Ҳ�º͵Ķ࣬��һ�����տ�������¥�µ����й�֮���޲�������
��������ɲŮ���أ���ǰ����λӢ��������������ֵ�Ů����������
��Ů����������һ��һ��Ů����
");
set("evil", 1);
set("no_auc", 1);
set("no_transmit", 1);
set("light_up", -1);

  set("exits", ([ /* sizeof() == 1 */
  
  "north" : __DIR__"room62",
  "west" : __DIR__"room58",
]));
  
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/locha-queen.c" : 1,
]));

  setup();
}
int valid_leave(object me, string dir)

{
        if(dir=="north"&&present("locha queen",environment(me)))
  {

message_vision(HIY"����Ů˵:����¶һ���ܷ��ҵ��湦��ɣ���\n"NOR,me);

return 0;
}
return 1;
}
