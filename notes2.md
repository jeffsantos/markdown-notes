---
title: Teste de Notes 2
author: Matthias Mittner, UiT
header-includes:
 - \usepackage[ruled,vlined,portuguese,portuguesekw]{algorithm2e}
...

# Introduction

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.


<!---
Comments look like this and do not show up in the PDF
-->

References are cited as @mittner2014brain or [@mittner2014brain].

# Methods

<!---
Table in LaTeX format because of fancy formatting
-->

\begin{table}[ht]
\centering
\caption{Probability to observe Bayes Factors of a certain magnitude or above for the used sample-size of $N=60$ assuming the original and the null-hypothesis.}
\begin{tabular}{llrrr}
  & & \multicolumn{3}{l}{$P(\text{BF}\ge\theta)$}\\
  Hypothesis & BF Type & $\theta=3$ & $\theta=10$ & $\theta=20$ \\
  \hline
  $d\sim \mathcal{N}(1.57, 0.51)$ & JZS BF$_{10}$ & 0.98 & 0.97 & 0.96 \\
     & Replication BF$_{10}$ & 0.98 & 0.96 & 0.96 \\
     & Meta-Analysis BF$_{10}$ & 0.99 & 0.99 & 0.99 \\\cline{2-5}
    $d=0$ & JZS BF$_{01}$ & 0.81 & 0.00 & 0.00 \\
   & Replication BF$_{01}$ & 0.98 & 0.95 & 0.91 \\
     & Meta-Analysis BF$_{01}$ & 0.63 & 0.27 & 0.06 \\
   \hline
\end{tabular}
\label{tab:probbf}
\end{table}

<!---
Environment defined in external file and logical proof package
-->

\begin{figure}[htb]
\begin{dedsystem}
\hline
  \AxiomC{}
  \RightLabel{axiom}
  \UnaryInfC{\Seq{\Delta, \gamma}{\gamma}}
\DisplayProof \\
  \AxiomC{\Seq{\Delta}{\gamma}}
  \RightLabel{weakening (w)}
  \UnaryInfC{\Seq{\alpha, \Delta}{\gamma}}
\DisplayProof \hspace{3em}
  \AxiomC{\Seq{\alpha, \alpha, \Delta}{\gamma}}
  \RightLabel{contraction (c)}
  \UnaryInfC{\Seq{\alpha, \Delta}{\gamma}}
\DisplayProof \\
  \AxiomC{\Seq{\Gamma, \alpha, \beta, \Delta}{\gamma}}
  \RightLabel{exchange (e)}
  \UnaryInfC{\Seq{\Gamma, \beta, \alpha, \Delta}{\gamma}}
\DisplayProof \hspace{3em}
  \AxiomC{\Seq{\Delta}{\alpha}}
  \AxiomC{\Seq{\alpha, \Gamma}{\gamma}}
  \RightLabel{cut}
  \BinaryInfC{\Seq{\Delta, \Gamma}{\gamma}}
\DisplayProof \\
  \AxiomC{\Seq{\Delta, \alpha}{\beta}}
  \RightLabel{$\imply$-right ($\imply$-r)}
  \UnaryInfC{\Seq{\Delta}{\alpha \imply \beta}}
\DisplayProof \\
  \AxiomC{\Seq{\Delta, \alpha \imply \beta}{\alpha}}
  \AxiomC{\Seq{\Delta, \alpha \imply \beta, \beta}{\gamma}}
  \RightLabel{$\imply$-left ($\imply$-l)}
  \BinaryInfC{\Seq{\Delta, \alpha \imply \beta}{\gamma}}
  \DisplayProof \\ [3ex]\hline
\end{dedsystem}
\caption{Rules of Gentzen's \lj}
\label{fig:gentzen}
\end{figure}


<!---
Algorithm package
-->

\begin{algorithm}[h]
  \LinesNumbered
  \KwIn{Uma fórmula $\phi$ em $LPC^\to$ que se quer falsificar}
  \KwOut{verdadeiro, se $\phi$ for tautologia, ou um contra-exemplo, caso contrário}
  \BlankLine
  
  Criar um ramo inicial contendo F$\phi$\;
  \While{existir um ramo aberto}{
    Escolher um ramo aberto $\Theta$\;
    \If{o ramo $\Theta$ não pode mais ser expandido}{
        Encontrar todos os átomos marcados de $\Theta$\;
        \KwRet{a valoração correspondente a estes átomos marcados\;}
    }
    Escolher $R$, uma das regras aplicáveis em $\Theta$\;
    Expandir o tableau, aplicando $R$ sobre $\Theta$\;
    Verificar se $\Theta$ ou seus sub-ramos fecharam\;
  }
  \KwRet{verdadeiro}\;
  \caption{Prova de Teoremas por Tableaux}
\end{algorithm}

# Results

# Discussion

# References
