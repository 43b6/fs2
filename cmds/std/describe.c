// describe.c

// inherit F_CLEAN_UP;
// Don't want this command be cleaned up while typing long string.

int main(object me, string arg)
{
        if(arg == "none")
        {
                me->delete("describe");
                write("Describe �����\n");
        } else {
        //me->edit( (: this_object(), ({ "do_describe", me}) :) );
        me->edit( (: call_other, __FILE__, "do_describe", me :) );
        }
        return 1;
}

void do_describe(object me, string text)
{
        me->set("describe", text);
        write("Describe �趨��ɡ�\n");
}

int help(object me)
{
write(@HELP
ָ���ʽ : describe || describe none
ָ��˵�� :
           describe �������Լ����ݣ���ı���ҿ����������
           describe none ��������趨��
���ָ�� :
           look
HELP
    );
    return 1;
}

