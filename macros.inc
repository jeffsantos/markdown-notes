\newcommand{\imply}{\ensuremath{\rightarrow}}

\newcommand{\cpl}{\ensuremath{\mathbf{Cla}}\xspace}
\newcommand{\ipl}{\ensuremath{\mathbf{Int}}\xspace}
\newcommand{\mpl}{\ensuremath{\mathbf{Min}}\xspace}
\newcommand{\mil}{\ensuremath{\mathbf{M}^{\rightarrow}}\xspace}

\newcommand{\lk}{\ensuremath{\mathbf{LK}}\xspace}
\newcommand{\lj}{\ensuremath{\mathbf{LJ}}\xspace}
\newcommand{\lm}{\ensuremath{\mathbf{LM}}\xspace}

\newcommand{\ljarrow}{\ensuremath{\mathbf{LJ^{\rightarrow}}}\xspace}
\newcommand{\ndarrow}{\ensuremath{\mathbf{ND^{\rightarrow}}}\xspace}

\newcommand{\lmt}{\ensuremath{\mathbf{LMT^{\rightarrow}}}\xspace}


\newcommand{\slmt}{\ensuremath{\mathcal{S-}\mathbf{LMT^{\rightarrow}}}\xspace}

\newcommand{\tk}{\ensuremath{\mathbf{Tableaux_{Cla}}}\xspace}
\newcommand{\tj}{\ensuremath{\mathbf{Tableaux_{Int}}}\xspace}
\newcommand{\tm}{\ensuremath{\mathbf{Tableaux_{Min}}}\xspace}
\newcommand{\tmi}{\ensuremath{\mathbf{Tableaux_{M^{\rightarrow}}}}\xspace}

\newcommand{\SEQ}{\ensuremath{\Rightarrow}}
\newcommand{\Seq}[2]{\ensuremath{#1 \SEQ #2}}

\newcommand{\SEQLMT}{\ensuremath{\Rightarrow_{LMT}}}
\newcommand{\Seqlmt}[2]{\ensuremath{#1 \SEQLMT #2}}

\newcommand{\SEQNDD}{\ensuremath{\Rightarrow_{ND}}}
\newcommand{\Seqndd}[2]{\ensuremath{#1 \SEQNDD #2}}

\newcommand\dboxed[1]{\dbox{\ensuremath{#1}}}

\newenvironment{dedsystem}
{\renewcommand{\arraystretch}{1}
 \newcolumntype{Y}{>{\centering\arraybackslash}X}
 \setlength{\extrarowheight}{3ex}
 \tabularx{\hsize}{|Y|}}
{\endtabularx}

\newenvironment{blockquote}{%
\par%
\medskip
\leftskip=4em\rightskip=2em%
\noindent\ignorespaces}{%
\par\medskip}


\newlength{\overwritelength}
\newlength{\minimumoverwritelength}
\setlength{\minimumoverwritelength}{3.5cm}
\newcommand{\overwrite}[3]{%
  \settowidth{\overwritelength}{$#2$}%
  \ifdim\overwritelength<\minimumoverwritelength%
  \setlength{\overwritelength}{\minimumoverwritelength}\fi%
  \stackrel
  {%
    \begin{minipage}{\overwritelength}%
      \color{#1}\centering\small #3\\%
      \rule{1pt}{9pt}%
    \end{minipage}}
  {\colorbox{#1!50}{\color{black}$\displaystyle#2$}}}

\newcommand\hcancel[2][black]{\setbox0=\hbox{$#2$}%
\rlap{\raisebox{.50\ht0}{\textcolor{#1}{\rule{\wd0}{1pt}}}}#2} 



%%% Local Variables:
%%% mode: latex
%%% TeX-master: "jefferson-thesis"
%%% End:
