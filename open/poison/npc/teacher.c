#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
void create()
{
        set_name(YEL"��ʮ��ͭ��"NOR,({"twenty-five master","master"}));
        set("long", @LONG
���ﹲ�ж�ʮ����ͭ�����㣬ÿһ��ı��飬��̬�Բ�
��ͬ������ֵ���ÿ��ͭ�˵ı��󣬶�д��һ��ʫ�䣬
�ѵ������ħ�̱޷��İ���������ѧϰ���壬��ʹ��
(learn)ָ�

LONG);

        set("gender","����");
        set("guild_master",1);
        set("class","poisoner");
        set("combat_exp",1000000);
        set("attitude","heroism");
        set("age",26);
        set("str", 44);
        set("cor", 24);
        set("cps", 18);
        set("per", 24);
        set("int", 42);
        set("force",800);
        set("family/family_name","ڤ��ħ��");
        set_skill("forever-love",100);
       setup();
}


