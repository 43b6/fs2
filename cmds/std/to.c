// to.c

// inherit F_CLEAN_UP;
// Don't want this command be cleaned up while typing long string.

int main(object me, string arg)
{ 
      //  me->edit( (: this_object(), ({ "do_to", me, arg }) :) );
        me->edit( (: call_other, __FILE__, "do_to", me, arg :) );
        return 1;
}

void do_to(object me, string arg, string str)
{
        seteuid(getuid());
        if(arg) me->force_me(arg + " " + str);
        else me->force_me(str);
}

int help (object me)
{
  write (@HELP
�﷨: to <����>
˵��:
      ������ͨ���� say, chat, rumor �ȵ�������, ��������һ��
    �Ѷ��е�ѶϢ˵��. ���¾���˵��һ��:

    to say  *�� enter*
    ...
    ...
    ...
    .

    ���������ָ�������, һ��Ҫ���� to ����, ����ֻ����� '.'
    �����Ϳ��Դﵽ���е�Ŀ��.

    Ҳ������������, �� to music
HELP);
}
