inherit ROOM;

void create ()
{
  set ("short","����");
  set ("long", @LONG
���Ǿ����ŵ���Ҫͨ·�������ǻ�԰������һֱ�ߵ��ף��㽫��
����һ��������ɱ���ķ��ӣ�����������Ҫ��ͷ�ĸо�����Ϊ��
�����ǲ��ܻ�ӭ���ˣ����е��˶���Ҫ���������أ����������
ͷ����̫�٣���ҪΪ���ѵ��Դ󸶳����ۡ�
LONG);
  set("objects", ([ /* sizeof() == 1 */
"/open/love/npc/hero":2,
  ]));
  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"room1-2",
  "east" : __DIR__"room2-7",
  "west" : __DIR__"room2-6",
  "south" : __DIR__"room1",
  ]));
  set("light_up", 1);

  setup();
}

