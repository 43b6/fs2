
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "�κ�֮·");
  set ("long","��·������ħ������, ����������������ħ���İ�ȫ. ����Ŀռ�������
һ��ʮ��а�ֵ�����, �����˸�����Ĺ��ӳ�����������޵ľ���, ǧ��
����������, ���������˻�, ������ɱ°��, �����˼䲻�ұ���, ����
�˴���������, ������Խ���������������������߻���ħ��. 
");
set("evil", 1);
set("no_auc", 1);
set("no_transmit", 1);
set("light_up", -1);

  set("exits", ([ /* sizeof() == 1 */
  
  "north" :  __DIR__"room92",
  "south" :  __DIR__"room63",
]));
  
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/seven-dark-5" : 1,
  __DIR__"npc/seven-dark-6" : 1,
  __DIR__"npc/seven-dark-7" : 1,
]));

  setup();
}
int valid_leave(object me, string dir)

{
        if(dir=="south" && present("seven-dark",environment(me)))
  {

message_vision(HIY"����ħ��˵:��С��������!!��\n"NOR,me);

return 0;
}
return 1;
}
