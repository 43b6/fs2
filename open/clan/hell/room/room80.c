inherit ROOM;
void create() {
	set( "short", "$HIW$����ҽԺ$HIY$XƤ$HIR$�ղ���$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/hell/room/room42",
	]) );
	set( "long", @LONG

ˮ������ҽʦ��Ϊ�����Ѹ�,�ټ�����ʱ�������....
����˵������ҹ..���绰...����ZƵ��...
��Ϊˮ����ҽʦ��ͽ��С��ǩ�ս���...��Ҳ������˼��ʦ����˱���..
���������ӳ���.�ڴ˿���һ��ר��XƤ��������..
��Ȼʹ���Իָ��۷�...Ҳ��С��ǩ�ս��ߵ����־���...
�������Ҫ�����С��ǩ˵BYE BYE,������ÿ��һ������Ļ�...
�ǵ����ҹ�ҽС��ǩ�ս����.....

 ����ר�� : 79979!! �������С��ǩ�ս������֢״...

      (֢״1)������ : tell nirvana heal����gin
    (֢״2)�ϴ����� : tell nirvana heal����kee
      (֢״3)С��ǩ : tell nirvana heal����sen
       (֢״4)X��� : tell nirvana deffire 
(֢״5)�ֶϽ�ʹ��� : tell nirvana heal����ack

           ��æ��...���Ժ��ٲ�.......
LONG);
	setup();
	replace_program(ROOM);
}
