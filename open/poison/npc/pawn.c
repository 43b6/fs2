
#include <ansi.h>
#include "/open/open.h"
inherit NPC;

void create()
{
	set_name("�����ϰ�",({"pawn"}) );
	set("long","
������ϰ壬��˵����ǰ���Ǿ���һ�������̵ĵ��ҳ�����ϻ���֮��ȴ
��֪Ϊ�����ڴ˵ؿ���������\n");
	set("no_kill",1);
	set("age",70);
	set("gender","����");
	set("str",25);
	set("con",24);
	set("max_kee",350);
        setup();
}
void greeting(object me)
{
	if(!me || environment(me)!=environment()) return;
{
	command("grin "+me->query("id"));
	command("say ���˺ã��뵱Щ������");
}
}
