inherit ROOM;

void create ()
{
  set ("short", "ɽ��");
  set ("long", @LONG
"�۹���������"һ������ ,�㲻�����Լ����Ṧ���������� ,
���������ɸ��� ,�������ܾ��� ,һ�ɺ�����ʱӿ����ͷ .·��
��һֻ���� ,��������ı��ֶ���󲻽� .

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room33.c",
  "eastdown" : __DIR__"room26",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/u/h/houng/mob/monkey2.c" : 1,
]));

  setup();
}
