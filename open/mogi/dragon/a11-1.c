// Room: /u/p/poloer/dragon/a11-1
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
һ���ǳ���С��ͨ����ֻ����һ����ͨ���Ŀ�ȣ�
    ͨ��ʪ���׻�����ˮ�ء���ô����ͨ��������ط�
    ��? �������¿�����ʲô�����ɡ�

LONG);
set("light_up", -1);

  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"a11",
  "down" : __DIR__"a11-2",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
