// made by funkcat, copy and re-edit by ccat
inherit BANK;
void create ()
{
  set ("short", "����Ǯׯ");
	set( "build", 6 );
  set ("long", @LONG
��������������Ǯׯ��Ҳ�����и��������Ĳ�ҵ����
��һ���԰�ȫ���������.  һ�Ÿ�ʾ(board)����������ķ�
����Ŀ.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/gsword/room/su3",
]));

  set("item_desc", ([ /* sizeof() == 1 */
  "board" : "
    balance: �鿴�����еĴ��    convert: ��Ǯ��
    withdraw: ���               deposit: ���    
    cdonate: ��Ǯת������İ���֮��
 ",
]));
    set("objects", ([
        "/open/gsword/mob/officer" : 1,
       ]) );

  set("light_up", 1);
   set("donate",1);

  setup();
}
