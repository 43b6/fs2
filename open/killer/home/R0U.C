// Room: /open/killer/room/r0u.c
inherit ROOM;

void create ()
{
  set ("short", "ѵ����");
  set ("long", @LONG
��������Ϊ����һ���ɱ�־ͺúõ���������ǰ�����ֽ̰ɣ���
��������ྭ�飬���Գ�Ϊ���ǵĲο����󡣺úü��Ͱɣ�
������½�ɱ�֣����ǹԹԵĵ�¥����ϰ�ɡ�
��һ������
      �����Ե��ã������ַ��㡣
      ����̫ȡ�ɣ��������ȹ̡�
LONG);

  set("exits", ([ /* sizeof() == 1 */
   "down" : __DIR__"r0.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/killer/npc/train_a.c" : 2,
]));
  set("light_up", 10);

  setup();
}