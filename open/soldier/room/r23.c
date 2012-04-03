
#include </open/open.h>
inherit ROOM;
void create()
{
  set ("short", "�о�");
  set ("long","
    ��˵�����������֯ͷͷ��ס���ˣ�������ôû����
��??������˿���о������˺���Ϣ���൱�е������ӣ���
�ұ��и�����(table),���������һЩ��ʫ������������
һ������(cabinet),�ڵ��Ϻ������ƶ����ĺۼ�������

 ");
   set("exits", ([
   "west"   : __DIR__"r24.c",
  ]));
  set("light_up", 1);
  set("item_desc", ([ /* sizeof() == 2 */
  "table" : "�����Ӻ��������ϵ�ľͷ��̳����ġ�\n",
  "cabinet" : "�����Ӻ��񱻶���������������(search)������\n",
]));
  set("search_desc", ([ /* sizeof() == 3 */
  "table" : "����Ŭ����и�������,�㷢������������һԲ��(disc)....��\n",
  "cabinet" : "������ϸ������㲢û�����κ�������\n",
  "disc" : "�㷢�����Բ�̿���ת��(turn) :D\n",
]));

  setup();
}

void init()
{
       add_action("do_turn","turn");
}
int do_turn(string str)
{
  object me;

  me=this_player();
  if( str != "disc" )
    return notify_fail("����תɶ??����Ҫ��ת�ò��ã�\n");
  tell_room(this_object(),"$n�����İ�Բ��������ת�˹�ȥ������\n",me);
  message_vision("ͻȻ���Ӹ���һ���ת��$n˲�䱻˦��ȥһ��������!!\n",me,me);
  me->move(__DIR__"r33.c");
  return 1;
}

