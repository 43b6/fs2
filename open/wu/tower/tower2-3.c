// Room: /u/p/pokai/room/wu/tower2-3
inherit ROOM;

void create()
{
  set ("short", "������ɱ����¥--");
  set ("long", @LONG
���������������С�����Ĺ�ϵ�����������䷿����˵ĸо��͸ո���ȫ
��ͬ����ʹ��ԭ������������ҲΪ֮�ɳڡ������и�ͨ����ɱ����¥�ĵ�¥�ݣ�
���ܵ�ǽ���Ͽ̻���һЩ������ͼ��(figure)����������Ǵ��ص��������о���
��������һЩ��¼��
LONG);

  set("light_up", 1);
  set("item_desc", ([ /* sizeof() == 1 */
  "figure" : @LONG

             O/     / /       O  _|         H
          -- |    0 --        l \ __     -- I --
            / \    |  \         I           Q     #@%$@%^$^&#.........

                                �㿴�˿���Ц��һ�£�������Щ����ΪȻ�ĸо���                 
LONG,
]) );
  set("exits", ([ /* sizeof() == 2 */
  "climb" : __DIR__"tower3-1",
  "east" : __DIR__"tower2-2",
]));
  setup();
}
