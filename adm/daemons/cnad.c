#pragma optimize
#pragma save_binary

#include <net/socket.h>

int overwrite = 1, MaxPage = 1, CurrentPage = 0;
string sAddress = "203.75.155.7 80";
string directory = "/cgi-bin/readcipt77.cgi?a1&0";
string inputfile = "/u/c/cccc/room/html/cna.html";
string titlefile = "/u/c/cccc/room/html/title";

void create()
{
        seteuid(getuid());
        remove_call_out("do_look");
        call_out("do_look", 60, 1);
        set_reset(this_object(), 86400);
}


int do_look(int index)
{
        string sMsg;

        if (sMsg = read_file(titlefile, index, 1))
                CHANNEL_D->do_channel(this_object(), "news", sMsg, 1);
        else if (sMsg = read_file(titlefile, index = 1, 1))
                CHANNEL_D->do_channel(this_object(), "news", sMsg, 1);
        else    index = 0;
        remove_call_out("do_look");
        call_out("do_look", 60, index+1);
        return 1;
}


/*==========================================================================
  update_news()
  Function:
     Go fetch the html page of CNA, and rearrange the infomation within it.
     "�������ű�������"
*/
int update_news()
{
        int iSocket = socket_create(STREAM, "handle_input_data",
                "handle_socket_err_close");

        overwrite = 1;
        if (iSocket < 0)
        {
                CHANNEL_D->do_channel(this_object(), "sys",
                        "CNA_D��create socket fail: "+socket_error(iSocket), 1);
                socket_close(iSocket);
                return 0;
        }
        socket_connect(iSocket, sAddress, "handle_input_data",
                "handle_socket_write");
        return 1;
}


int search(string msg)
{
        string *filter = ({ "�������", "�չ���", "������", "У������",
                "��Ҫ��ֽͷ�����ű���", "ȫ������һ��", "��ʷ�ϵĽ���",
                "�л������ʮ", "ͼƬ˵��", "��", "��",  "����", "��ͳ��",
                "֮", "��", "��", "��", "��", "(", ")", });

        foreach (string pattern in filter)
                if (strsrch(msg , pattern) >= 0) return 1;
        return 0;
}


void update_title()
{
        int    iRow = 85, NewPage;
        string sRow, sTitle = "";

        if (file_size(inputfile) < 1) return;
        if (read_file(inputfile, iRow++, 1) ==
                "</td><td><h1><center>Ŀǰ�޴�������</center></h1>") return;

        while ((sRow = read_file(inputfile, iRow++, 1)) != "</table>\n")
        {
                int    iNews = 93, iNewsBegin, tmp;

                if (!sRow) break;
                if (sscanf(sRow, "%*s>Page %*d of %d<%*s", tmp) == 4)
                {
                        MaxPage = tmp;
                        continue;
                }
                tmp = sizeof(sRow)-2;
                while (iNews<tmp && sRow[iNews++] != '<')
                        if (sRow[iNews] == '>') iNewsBegin = iNews;
                if (iNewsBegin+1 >= iNews-2 || iNews-2 > tmp+1 ||
                    !is_chinese(sRow[iNewsBegin+1..iNews-2])) break;
                if (search(sRow[iNewsBegin+1..iNews-2])) continue;
                sTitle = "�����磺"+sRow[iNewsBegin+1..iNews-2]+"��\n" + sTitle;
        }

        if (sizeof(sTitle) < 1) return;
        sTitle = replace_string(sTitle, "��", "��");
        sTitle = replace_string(sTitle, "��", "��");
        sTitle = replace_string(sTitle, "��", "��");
        sTitle = replace_string(sTitle, "��", "��");
        sTitle = replace_string(sTitle, "��", "��");
        if (strlen(sTitle)>1 && sTitle[<1]=='\n') sTitle = sTitle[0..<2];
        if (!(NewPage = (CurrentPage==1))) sTitle = "\n" + sTitle;
        write_file(titlefile, sTitle, NewPage);
}
void handle_input_data(int fd, mixed message)
{
        write_file(inputfile, (string)message, overwrite);
        overwrite = 0;
}


void handle_socket_err_close(int fd)
{
        socket_close(fd);
        update_title();
}


void handle_socket_write(int fd)
{
        string  dir = directory;

        if (CurrentPage >= MaxPage) CurrentPage = 0;
        else if (CurrentPage > 0) dir += "&"+CurrentPage;
        socket_write(fd, "GET "+dir+" HTTP/1.0\r\nAccept:*/*\r\n\r\n");
        CurrentPage++;
}
