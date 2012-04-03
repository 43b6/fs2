// snake.c by powell

#include <ansi.h>

inherit NPC;

void create()
{
	set_name("��Ⱥ", ({ "snake" }) );
	set("race", "Ұ��");
	set("greeting_msg", ({
		"\n\nͻȻ���㷢����ǰ��һȺ�������䶯����Ⱥ!\n"+
                "��Щ�����϶������޵�ɫ�ʣ���ض����о綾��\n"+
                "��Ψһ����ͷ���ǸϿ��뿪���....\n\n\n\n\n"+
                HIR"��! �㱻��Ⱥ��ҧ��һ�ڡ�\n\n"NOR+
                HIB"��Ⱥ��ʼ��ɢ��ȥ.....\n"NOR }) );
        this_player()->apply_condition("snake_poison", 10);
        call_out("gone",1); 
	setup();
}
void gone()
{
	destruct(this_object());
}
