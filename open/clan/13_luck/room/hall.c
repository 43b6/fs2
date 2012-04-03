// Room : /open/clan/demon_castle/room/hall.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "����Ȫ" );
	set( "object", ([
		"file10"   : "/open/capital/guard/gring",
		"amount7"  : 1,
		"file5"    : "/open/doctor/pill/gnd_pill",
		"amount1"  : 1,
		"file1"    : "/open/capital/guard/gring",
		"file4"    : "/open/doctor/pill/sky_pill",
		"file6"    : "/open/mogi/dragon/obj/scale",
		"file8"    : "/open/mogi/castle/obj/sspill",
		"amount8"  : 2,
		"amount4"  : 237,
		"amount2"  : 1,
		"amount6"  : 1,
		"amount10" : 1,
		"file7"    : "/open/mogi/dragon/obj/scale",
		"file3"    : "/daemon/class/blademan/obj/shield",
		"amount3"  : 1,
		"amount9"  : 1,
		"file2"    : "/open/main/obj/shiblade",
		"file9"    : "/obj/gift/bingtang",
		"amount5"  : 216,
	]) );
	set( "item_desc", ([
		"map" : @ITEM
                                             �����  
                                               �O
                            �׻���           ������           ��ȸ��
                              �O               �O               �O
                             �ÿڣ��������ȣ�������������ȣ��ÿ�
                                               �O
  ܽӣȪ                                     �����
    �O                                         �O
 ˮ֮���                                   �ʳǴ��
    �O                                         �O
  ܽӣ����ܽӣ����ܽӣ����ӳˮ�ũ��ʳ�ˮ·  �ʳǴ��
                                     �O        �O
                                  �ʳ�ˮ·���ʳǴ��
                                               �O
                                            �ʳǴ��
                                               �O     
                 ������������ˮ��������ˮ��������Ȫ��ӽȪͤ�������ֵ��������ֵ�����֮�����
                   �O                          �O
  ����ˮ����ڣ�����ˮ��                     ������

ITEM,
	]) );
	set( "exits", ([ /* sizeof() == 5 */
		"west"      : "/open/clan/13_luck/room/room3.c",
		"east"      : "/open/clan/13_luck/room/room2.c",
		"south"     : "/open/clan/13_luck/room/room5.c",
		"up"        : "/open/clan/13_luck/room/room9.c",
		"enter"     : "/open/clan/13_luck/room/room136.c",
		"north"     : "/open/clan/13_luck/room/room4.c",
	]) );
	set( "build", 10067 );
	set( "light_up", 1 );
	set( "no_transmit", 1 );
	set( "long", @LONG

    ����Ȫ��������ʱ�޿̵�ɢ���������°�ĵ�����⣬���������
Ȫˮ���������Ҳ�����ܵľ��������������·����˼��ɾ���������Ȫ
Ҳ��ʮ����������ĵ㣬�ǽ����ʳǵıؾ�֮�أ�����Ҳ���ô�ҹ�ͨ
����ĵط����������֪��ʮ������ĵ�ͼ���Թۿ�һ�µ�ͼ(map)��

LONG);
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	setup();
	call_other( "/obj/board/13_luck_b", "???" );
	
	}
