inherit "/open/clan/claneqshop.c";  
void create() {
	set( "short", "$HIG$����װ����Ŵ�(ϡ��Ķ���)$NOR$ " );
	set( "light_up", 1 );
	set( "no_clean_up", 1 );   
	set( "build", 10041 );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/hall",
	]) );
	set( "long", @LONG
һ���ִ��ֿ��ı�����,����������������������ܵĵ�ǹ��צ,���ڵظ�
�İ��ڶ�ӵ��һ����ʵ��,����ͨ���в����õ��˴��ͽ׵Ĵ���ҵ�,����Ϊ��δ��
���յ��°�������,�ظ���Ȼ�������һ������ղ���,ϣ���ظ��İ������뿪��
��ʱ���ܽ����ϲ��ص�װ�������˴�����

LONG);
	setup();
}
