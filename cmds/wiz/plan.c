// plan.c

// inherit F_CLEAN_UP;
// Don't want this command be cleaned up while typing long string.

inherit F_DBASE;

void create()
{
        seteuid(getuid());
        set("name", "�ƻ�ָ��");
        set("id", "plan");
}

int main(object me, string arg)
{
        if(arg == "none")
        {
                me->delete("plan");
                write("Plan �����\n");
        } else {
      //  me->edit( (: this_object(), ({ "do_plan", me}) :) );
        me->edit( (: call_other, __FILE__, "do_plan", me :) );
        }
        return 1;
}

void do_plan(object me, string text)
{
object link_ob;

        me->set("plan", text);
        link_ob = me->query_temp("link_ob");
        if( link_ob ) {
                link_ob->set("plan", text);
                link_ob->save();
        }
        write("Plan �趨��ɡ�\n");
}

int help(object me)
{
write(@HELP
ָ���ʽ : plan || plan none

���ָ����Ա༭�Լ��ļƻ���plan none ��������趨��

���ָ�finger 
HELP
    );
    return 1;
}

