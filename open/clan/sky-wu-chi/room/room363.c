inherit ROOM;
void create() {
	set( "short", "С���ߨ���ů����" );
	set( "object", ([
		"amount7"  : 1,
		"file7"    : "/open/snow/obj/figring",
	]) );
	set( "item_desc", ([
		"ɽ" : @ITEM
һ���۴��ɽ
ITEM,
	]) );
	set( "light_up", 1 );
	set( "build", 10159 );
	set( "owner", "tony" );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
		"up"        : "/open/clan/sky-wu-chi/room/room21",
	]) );
	set( "long", @LONG
    ������[36mС����[0m���ſڣ�ֻ��ǽ�Ϲ�������д�ţ�
     
       �� ˧���ɵ��������� ��[31m����˧��[0m��[36mС����[0m֮���� ��
 
       �� �� ��                               �� һ ��
       �� �� ��                               �� �� ��
       �� �� ��                               �� һ ��
       �� �� ��                               �� Ц ��
       �� ѩ ��                               �� Ī ��
       �� �� ��                               �� ֪ ��
       �� �� ��                               �� �� ��
 
 

LONG);
	setup();
	replace_program(ROOM);
}
