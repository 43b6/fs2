// Room: /u/p/poloer/dragon/endroom
inherit ROOM;

void create ()
{
  set ("short", "ħ�����ܲ�");
  set ("long", @LONG
һ�������һ��ʬ��ζ���۱Ƕ��������˷ǳ��Ķ��ġ���������
ȫ�������˺��ǣ��������������ȵ��˰ɡ�Ҳ���Կ���������һλ��
�����ˣ�ǽ�ڻ�����Ѫ��ǰ������һ���˶����ڿ�ʳ���⡣
Ī������...........

LONG);
        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);

  set("exits", ([ /* sizeof() == 2 */
  "out" : __DIR__"g2-5",
"up" : __DIR__"f-4",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/jen.c" : 1,
]));

  setup();
}     

