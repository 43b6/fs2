inherit COMBINED_ITEM;
#include <ansi.h>

void create()
{
        set_name(HIG"����"NOR,({"worm"}));
        set_weight(10);
        if(clonep())
                set_default_object(__FILE__);
        else
        {
        set("value",100);
        set("unit","��");
        set("base_unit","ֻ");
        set("long",
"һֻ��˸���߲���ɫ�ĳ��ӣ��ഫ�˳������ɵ��������κ�һ���ռ䣬
�Ǵ����ڿռ���ռ佻�ᴦ�ĳ��ӣ�������˲�С����ʧ�ڿռ�Ľ���
����ֻҪ������(accompany)������˳�����뿪������....ȴ�����û����
����...
\n");
        }
        set_amount(1);
        setup();
}

void init()
{
add_action("do_accompany","accompany");
}

int do_accompany(string arg)
{
object me,ob,env;
int i;
        me = this_player();
        env = environment(me);
        if( !arg )
                return 0;

        arg=lower_case(arg);
        if( !ob = present(arg,me) )
                return 0;
        if( ob != this_object() )
                return 0;
        if( !env->query_temp("evil-place") )
                return notify_fail(HIG"�����������ؿڴ����ҳ�����\n"NOR);
        message_vision(HIG"
$N������$n"HIG"��ֻ��$n"HIG"���ϵĿ�ʳ���߲�ͨ����

û��ã�$N��������$n"HIG"��ҧ�Ƶĵط���\n"NOR,me,ob);
        message_vision(HIY"\n$NͻȻ���������\n"NOR,me);
        add_amount(-1);
return 1;
}
