inherit "/open/clan/claneqshop.c";    
void create() {
	set( "short", "����������" );
	set( "item_desc", ([
		"post" : @ITEM

     [0;1;31m��[1m��[1m��[1mO[1;32m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1;33m��[1m��[1m��[1m��[0m

     list              �鿴����̨����ʲô��Ʒ
  take xxxx              ����Ʒ�ӷ���̨ȡ��
   put xxxx              ����Ʒ�������̨��
   put all          �����ϵ���Ʒȫ���������̨��

ITEM,
	]) );
	set( "build", 10114 );
	set( "light_up", 1 );
	set( "exits", ([
		"enter"     : "/open/clan/13_luck/room/room277",
		"north"     : "/open/clan/13_luck/room/hall.c",
	]) );
	set( "long", @LONG

    ����һ��������ͷ��߼���������Ĵ󷿼䣬�ڰ�����ռ�к���Ҫ
�ĵ�λ��������װ諵ķǳ�Ư����ǽ��һ������Ȥ�Ĵ��ֱ���post����
������������ߣ���ͷ�ģУϣ���д�úܲ������Ӻ͵ذ�Ҳ��ʮ�ֵ�
�ɾ�������Ϊ�Ƿ���̨�Ĺ�����Ա�൱������������ŵ���ƷҲ����
�������еķǳ����롣

LONG);
	setup();
}
