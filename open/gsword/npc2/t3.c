#include <ansi.h>
inherit NPC;
string ask_test();
void create()
{
        set_name(HIW"����������"NOR, ({ "testman"}) );
        set("gender", "����" );
        set("age", 63);
        set("int", 26);
set("long","��˵��ר�Ŷ����ɽ������˵��ػ���..����������й��������¡�\n");
        set("inquiry",([
        "����":(:ask_test:),
        ]));
        set("combat_exp",50000);
        set("max_kee",500);
        set("max_gin",500);
                set_skill("unarmed",50);
        set_skill("parry",50);
        set_skill("force",50);
        setup();
   }
string ask_test()
{

tell_object(this_player(),HIW"���������Ŀ�����ڿ����������..\n"NOR);
 return (HIW"��������������ȥ�������߰�\n"NOR);
 
}
