
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "�ű���¥");
  set ("long","ǽ���ϵ�������ɫ�Ĺ����ϸһ�����ɿ�������\���������ɵ�������
���������\����ֻ�۾��������������͸�ſֲ�����Ϣ������Ҳ���ź�
��ĵ�̺�����˲�������ض������������ܵ���ħ�ƺ�Ҳ�����������
����Ҳ�º͵Ķ࣬��һ�����տ�������¥�µ����й�֮���޲�������ǰ
��վ��һ��������ս������ǿ����ħ��ȫ��ɱ�����ڣ����Ƿ���Ĵ�
֮һ��������!
");
set("evil", 1);
set("no_auc", 1);
set("no_transmit", 1);
set("light_up", -1);

  set("exits", ([ /* sizeof() == 1 */
  
  "east" : __DIR__"room61",
  "west" : __DIR__"room57",
]));
  
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/sholo-king.c" : 1,
]));

  setup();
}
int valid_leave(object me, string dir)

{
        if(dir=="east"&&present("king",environment(me)))
  {

message_vision(HIY"������˵:����¶һ���书��˵�ɣ���\n"NOR,me);

return 0;
}
return 1;
}
