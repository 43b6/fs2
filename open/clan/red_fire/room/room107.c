inherit ROOM;
void create() {
	set( "short", "$HIY$��$HIR$���� $HIC$��� $HIB$�ƺ�$HIY$��$NOR$" );
	set( "exits", ([
		"down"      : "/open/clan/red_fire/room/hall",
	]) );
	set( "outdoors", "/open/clan/red_fire" );
	set( "long", @LONG

  $HIR$�j�j�j�j�j�j        �j�j�j�j�j�j
      $YEL$�j�j�j�j�j�j        �j�j�j�j�j�j
          $HIY$�j�j�j�j�j�j        �j�j�j�j�j�j
              $HIG$�j�j�j�j�j�j        �j�j�j�j�j�j
                  $HIC$�j�j�j�j�j�j        �j�j�j�j�j�j
                      $HIB$�j�j�j�j�j�j        �j�j�j�j�j�j
                          $HIM$�j�j�j�j�j�j        �j�j�j�j�j�j

$NOR$��Ծ��һƬ$HIM$�߲�$HIB$�ƺ�$NOR$֮��......

���ֲ���$HIY$��ָ$NOR$......��ȫ�Ҳ�������......

��ֻ�����$HIC$Ʈ��Ʈ$NOR$......$HIC$Ʈ��Ʈ$NOR$......

����......���������½���...... 


LONG);
	setup();
	replace_program(ROOM);
}
