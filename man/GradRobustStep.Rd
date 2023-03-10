% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{GradRobustStep}
\alias{GradRobustStep}
\title{Range of combinatorials algorithms to identify approximate optimal GLMM design}
\usage{
GradRobustStep(
  idx_in,
  n,
  C_list,
  X_list,
  Z_list,
  D_list,
  w_diag,
  max_obs,
  weights,
  exp_cond,
  nmax,
  V0_list,
  type,
  robust_log = FALSE,
  trace = TRUE,
  uncorr = FALSE,
  bayes = FALSE
)
}
\arguments{
\item{idx_in}{Integer vector specifying the indexes of the experimental conditions to start from}

\item{n}{Integer specifying the size of the design to find. For local search, this should be equal to the size of idx_in}

\item{C_list}{List of C vectors for the c-optimal function, see \link[glmmrOptim]{DesignSpace}}

\item{X_list}{List of X matrices, where X is the matrix of covariates in the regression model}

\item{Z_list}{List of Z matrices where Z is the design matrix of random effects terms}

\item{D_list}{List of D matrices, where D is the covariance matrix of the random effects}

\item{w_diag}{Matrix with each column corresponding to the diagonal of the individual level variance matrix, see \link[glmmrBase]{Model} for details}

\item{max_obs}{Vector of integers specifying the maximum number of copies of each experimental condition}

\item{weights}{Vector specifying the weights of each design}

\item{exp_cond}{Vector specifying the experimental condition index of each observation}

\item{nmax}{Integer specifying the maximum number of rows of matrices X and Z during the algorithm.}

\item{V0_list}{List of prior covariance matrices for the model parameters}

\item{type}{Integer. 0 = local search algorithm. 1 = local+greedy+local. 2 = local+greedy. 3 = greedy+local}

\item{robust_log}{Logical indicating to use a weighted sum of log (TRUE) or absolute (FALSE) values of the c-optimal 
function when using a robust criterion.}

\item{trace}{Logical indicating whether to provide detailed output}

\item{uncorr}{Logical indicating whether to treat all the experimental conditions as uncorrelated (TRUE) or not (FALSE)}

\item{bayes}{Logical indicating whether to use a Bayesian model with prior distributions on model parameters (TRUE) or a 
likelihood based model (FALSE)}
}
\value{
A list containing: a vector of experimental condition indexes in the optimal design, the variance of the optimal design,
 the number of function calls and matrix operations, and an indicator for whether a Bayesian model was used.
}
\description{
Range of combinatorials algorithms to identify approximate optimal GLMM design
}
