inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
�������������������½���Ľ�����, ��䷿�����ر�����μҵ�
��ѧ���˶������������������õ�, ��Ϊ�������˳������������ֶ���
�������ش���,��˱���������׼�����Ƿ򸾾�ס��������,����Ϊ��
���������ش�����,���������������������֮��,�������Ĵ����ڴ˰�
�ء�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"aa22",
  "east" : __DIR__"aa24",
]));
  set("objects", ([ /* sizeof() == 4 */
"/open/tailong/npc/guard1.c":1,
"/open/tailong/npc/guard2.c":1,
"/open/tailong/npc/guard3.c":1,
"/open/tailong/npc/guard4.c":1,
]));

  setup();
  replace_program(ROOM);
}
