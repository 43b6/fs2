inherit ROOM;
void create() {
	set( "short", "������վ" );
	set( "exits", ([
		"up"        : "/open/clan/hell/room/room129",
		"down"      : "/open/clan/hell/room/room23.c",
		"north"     : "/open/clan/hell/room/room131.c",
	]) );
	set( "long", @LONG
������������������վ, ��ֵĳ���, ������ɳĮ�����ն�, ��
����ţ���⳵, ����ֻҪ��еó����ֵĽ�ͨ����������С�

$HIY$����������ʹ��(transfer)ָ��ǰ������ǰ����ȥ������վ!!$NOR$

    �����������Ʈ��Ʈȥ��
    ̫���մӶ����ĵ�ƽ������
  ��$RED$С����$NOR$��������С����(Sale girl)$HIM$(������)$NOR$
  ����ɵ����Ů���ӡ�$HIY$��������$NOR$��(����ר��)С��(min)$HIC$(����������)$NOR$
  $HIW$����$HIY$����$NOR$����tin�С�(����)ŷ���˹(onyx) $HIG$(��������)$NOR$  
  $YEL$��$RED$��$GRN$��$NOR$��$HIW$@@?$HIC$<<=$HIY$����$HIG$ץ$HIR$����$NOR$�����(blur)$HIY$(����¥��)$NOR$
  $HIR$��$HIG$��$HIY$ɱ$HIB$��$NOR$ ��ľֱ��(neun)
  $HIR$��$HIG$��$HIY$ɱ$HIB$��$NOR$��$HIR$��   $HIC$��   $HIM$��   $HIG$2$NOR$��һ��ɳ��(ssc)
  $HIR$ɱ��ȫ��׷ɱ����ͷ$NOR$��$HIY$Խ��Խtin$HIC$,tin������$NOR$����ɱ(php)
LONG);
	setup();
	replace_program(ROOM);
}
